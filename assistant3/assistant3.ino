#include <DHT.h>

#define debugSerial Serial
#define DHTPIN 11 // Digital Pin for DHT22
#define DHTTYPE DHT22

// Define LED and fan pins
#define redLED 8
#define yellowLED 9
#define blueLED 10
#define fanPin 2

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Set pin modes
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(fanPin, OUTPUT);

  // Initialize serial communication
  debugSerial.begin(9600);

  // Delay for stability
  delay(2000);

  // Initialize DHT sensor
  dht.begin();
  debugSerial.println("DHT22 initialized.");
}

void loop() {
  // Read humidity
  float humidity = dht.readHumidity();

  // Check if the data is valid
  if (isnan(humidity)) {
    debugSerial.println("Failed to read humidity from DHT sensor!");
    return;
  }

  // Print humidity value
  debugSerial.print("Humidity: ");
  debugSerial.println(humidity);

  // Control LEDs and fan based on humidity
  if (humidity > 42.0) {
    controlLED(redLED); // Red LED blinks
    delay(100);
    turnFanOn();
  } else if (humidity > 44 && humidity <= 42.0) {
    controlLED(yellowLED); // Yellow LED blinks
    delay(100);
    turnFanOff();
  } else {
    controlLED(blueLED); // Blue LED blinks
    delay(100);
    turnFanOff();
  }

  // Delay for 3 seconds before next reading
  delay(3000);
}

// Function to control blinking LED
void controlLED(int ledPin) {
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(blueLED, LOW); // Ensure only one LED is active

  for (int i = 0; i < 5; i++) { // Blink LED 5 times
    digitalWrite(ledPin, HIGH);
    delay(300); // On for 300ms
    digitalWrite(ledPin, LOW);
    delay(300); // Off for 300ms
  }
}

// Turn on the fan
void turnFanOn() {
  digitalWrite(fanPin, HIGH);
  debugSerial.println("Fan turned ON.");
}

// Turn off the fan
void turnFanOff() {
  digitalWrite(fanPin, LOW);
  debugSerial.println("Fan turned OFF.");
}
