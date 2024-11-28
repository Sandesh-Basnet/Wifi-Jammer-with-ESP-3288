# Wi-Fi Jamming using Node MCU (ESP8266)

## Overview
This project demonstrates a live setup for Wi-Fi jamming using the Node MCU (ESP8266). It is intended to educate about wireless interference, its impact, and mitigation techniques.

⚠️ **Disclaimer**  
Wi-Fi jamming is **illegal in many jurisdictions** and can disrupt critical services. This project is strictly for **educational purposes** and should be conducted with appropriate permissions in a controlled environment.

---

## Features
- Demonstrates how to use Node MCU (ESP8266) to emit jamming signals.
- Shows the impact of jamming on connected devices (e.g., smartphones, IoT, and laptops).
- Explores mitigation strategies to prevent Wi-Fi disruptions.

---

## Requirements

### Hardware
- Node MCU (ESP8266)
- USB cable
- (Optional) External antenna for enhanced signal strength

### Software
1. **Arduino IDE**: Download from [arduino.cc](https://www.arduino.cc/en/software).
2. **ESP8266 Libraries**: Install through Arduino IDE's Library Manager.

---

## Setup Instructions

### 1. Hardware Setup
1. Connect the Node MCU to your computer via a USB cable.
2. Attach an optional external antenna to improve signal quality.

### 2. Install Arduino IDE and ESP8266 Libraries
1. Install Arduino IDE from [here](https://www.arduino.cc/en/software).
2. Add the ESP8266 platform to Arduino IDE:
   - Go to `File > Preferences`.
   - Add the following URL to "Additional Board Manager URLs":  
     ```
     http://arduino.esp8266.com/stable/package_esp8266com_index.json
     ```
   - Go to `Tools > Board > Board Manager` and install the **ESP8266** package.

3. Install the required libraries via Arduino IDE’s `Tools > Manage Libraries`.

### 3. Clone Repository and Flash the Code
1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/your-repo-name/esp8266-wifi-jammer.git
   cd esp8266-wifi-jammer
