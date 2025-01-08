# 🌟 Multifunctional Wardrobe Dehumidification Assistant 🌟

Hello everyone! 👋 Welcome to Trista’s CASA0016 coursework repository!  
This project introduces the **Multifunctional Wardrobe Dehumidification Assistant**, a device specifically designed to efficiently monitor, control, and reduce humidity levels inside wardrobes. Let’s dive into the details! 🚀

---

## 📖 What is this device?

The **Multifunctional Wardrobe Dehumidification Assistant** is an Arduino-powered system that integrates sensors, actuators, and a passive dehumidification unit to maintain optimal storage conditions in wardrobes. But wait—it’s not just a humidity controller! This device also comes with a **dedicated drying compartment** for storing small, humidity-sensitive items (and it has a cute smiley face drawer handle 😊).

![Components Overview](https://github.com/TTrista/CASA0016_Final/blob/main/interim%20PPT/Components.png)


### Features:
- **Real-time humidity monitoring** 🕒  
- **Dynamic control** via LEDs and a fan 🌬️  
- **Dual-circuit design** for stable power supply ⚡  
- **Drying compartment** for extra functionality 💼  

---

## 💡 Key Components

Here’s a quick rundown of the magic inside this device:  
- **Arduino R3**: The brain of the operation 🧠  
- **DHT22 Sensor**: Measures humidity with precision 📊  
- **Red, Yellow, and Blue LEDs**: Visual indicators of humidity levels 💡  
- **60V N-Channel MOSFET**: For fan control 🔧  
- **9V Servo Fan**: Keeps the air flowing 🌬️  
- **Calcium Chloride Moisture Absorber**: Passive yet powerful dehumidification 💧  

---

## 🎨 Physical Design

The device is housed in a **55cm cubic box** made of white 3D-printed plastic. The design has two levels:  
1. **Lower compartment**: Encases all the electronics and components.  
2. **Upper compartment**: Serves as a dedicated low-humidity storage space for small items.  

Oh, and don’t forget the **smiley face drawer handle**! It’s designed to make you smile every time you use it. 😊

### Key Design Features:
- **Ventilation opening** on the front panel for optimized airflow.  
- **Three LED indicators** to provide clear humidity feedback.  
- **Two power interfaces** on the back for easy connectivity.  
- **Transparent acrylic shelves** inside to organize components and add a modern touch.

---

## ⚙️ The Challenge: Dual-Circuit Design

This project wasn’t without its challenges! The main difficulty was powering components with different voltage requirements. Here’s how we tackled it:  
1. **Circuit 1**: Supplies 5V for the DHT22 sensor and LEDs via USB.  
2. **Circuit 2**: Supplies 9V for the fan through the DC input.  

Both circuits share a common ground (GND) to ensure stability and consistency. The fan’s power is regulated by a **60V N-Channel MOSFET**, allowing precise control based on the sensor readings.

---

## 🚀 How It Works

1. **Initialization**:  
   When powered on, the DHT22 sensor measures humidity, and the Arduino processes the data. The system displays “DHT22 Initialized” on the monitoring panel to confirm everything is running smoothly.

2. **Humidity Control Logic**:  
   - **High Humidity (>42%)**: Red LED blinks, and the fan activates to reduce moisture.  
   - **Moderate Humidity (37.5%–42%)**: Yellow LED blinks as a warning, but the fan remains off.  
   - **Low Humidity (<37.5%)**: Blue LED blinks to indicate safe conditions, and the fan stays off.

3. **Drying Compartment**:  
   The top compartment provides a low-humidity environment for storing small, sensitive items like electronics or important documents.

---

## 📂 Repository Contents

- **Code**: All Arduino code can be found in the `/src` folder. (https://github.com/TTrista/CASA0016_Final/tree/main/assistant3)
- **PPT Presentation**: A detailed project presentation is available [here](https://github.com/TTrista/CASA0016_Final).  
- **Demo Video**: Embedded in the presentation slides for easy access.

---

## 🔧 How to Set It Up

### Hardware
1. Assemble the components as shown in the circuit diagram.  
2. Connect the Arduino board to your PC via USB.  
3. Ensure all power connections are secure.

### Software
1. Install the [Arduino IDE](https://www.arduino.cc/en/software).  
2. Clone this repository:
   ```bash
   git clone https://github.com/YourGitHubUsername/YourRepositoryName.git
