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

## Flashing the Code to Node MCU

### 1. Open the Code
- Open the provided Wi-Fi jamming code in Arduino IDE.

### 2. Customize the Code
- Modify the parameters as needed:
  - **CHANNEL**: Set the Wi-Fi channel to target (1–14).
  - **JAMMING_DURATION**: Specify the duration of jamming in seconds.

### 3. Configure Arduino IDE
- In Arduino IDE, go to **Tools** and select:
  - **Board**: `NodeMCU 1.0 (ESP-12E Module)`
  - **Port**: Select the COM port where the Node MCU is connected.

### 4. Upload the Code
- Click **Upload** to flash the code to the Node MCU.

---

## Execution

### 1. Run the Program
- Power the Node MCU, and it will start emitting jamming signals to disrupt nearby Wi-Fi networks.

### 2. Observe the Effects
- Devices within range will experience connectivity issues:
  - **Smartphones**: Loss of Wi-Fi, slow speeds, or dropped calls.
  - **Laptops/PCs**: Interrupted internet access or connectivity.
  - **IoT Devices**: Loss of communication and functionality.

---

## Observing Effects

| **Device**       | **Effect**                                       |
|-------------------|-------------------------------------------------|
| **Smartphones**   | Dropped Wi-Fi, slow speeds, lost calls          |
| **Laptops/PCs**   | Interrupted connectivity, internet disconnections |
| **IoT Devices**   | Loss of functionality, inability to connect     |

---

## Mitigation Techniques

- **Strong Signal**: Use high-gain antennas and position routers strategically.
- **Frequency Hopping**: Deploy networks using FHSS (Frequency Hopping Spread Spectrum) technology.
- **Enhanced Security**: Use robust encryption (e.g., WPA3) and strong passwords.

---

## Ethical Considerations

⚠️ **Important**  
- **Unauthorized Wi-Fi jamming is illegal** and can lead to severe consequences.
- Perform this project only in **controlled environments** with proper permissions.
- Avoid disrupting public or critical services.

---

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

---

## Contributors

- **Sandesh Basnet**
- **Aayan K.C**
- **Aaditya Roila**
- **Ronak Kunwar**

---

## Questions?

Feel free to open an issue or contact the contributors via this repository.
