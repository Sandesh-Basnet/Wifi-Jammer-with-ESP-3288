Wi-Fi Jamming using Node MCU (ESP8266)
Overview
This repository demonstrates a live Wi-Fi jamming setup using the Node MCU (ESP8266). It provides insight into how wireless interference can disrupt communication, the setup process, and the ethical considerations associated with such activities.

⚠️ Disclaimer
Wi-Fi jamming is illegal in many jurisdictions and may disrupt essential services. This project is for educational purposes only and should be conducted with proper authorization and within controlled environments. Misuse can lead to legal consequences.

Features
Understand the principles of Wi-Fi jamming
Learn to program the Node MCU for signal interference
Observe the impact of jamming on various devices
Explore mitigation strategies for Wi-Fi interference
Getting Started
Hardware Requirements
Node MCU (ESP8266)
USB cable
Optional: External antenna for stronger signals
Software Requirements
Arduino IDE: Download here.
ESP8266 Libraries: Install via Arduino IDE's Library Manager.
Setup Guide
1. Hardware Setup
Connect the Node MCU to your computer via USB.
(Optional) Attach an external antenna to the Node MCU for improved signal strength.
2. Software Installation
Install Arduino IDE.
In the Arduino IDE:
Go to File > Preferences.
Add the following URL to the "Additional Board Manager URLs" field:
http://arduino.esp8266.com/stable/package_esp8266com_index.json.
Open Tools > Board > Board Manager and install the ESP8266 platform.
Install the required ESP8266 libraries.
3. Wi-Fi Jamming Code
Obtain the Wi-Fi jamming code from this repository.
Open the code in Arduino IDE.
Adjust parameters such as frequency and power as needed.
Upload the code to the Node MCU.
Execution
Power up the Node MCU and run the uploaded code.
The device will emit jamming signals on the specified frequency bands.
Observe the impact on nearby devices (e.g., smartphones, laptops, IoT devices).
Effects of Jamming
Smartphones: Loss of Wi-Fi connectivity, dropped calls.
Laptops/PCs: Interrupted internet access.
IoT Devices: Disrupted communication and functionality.
Mitigation Techniques
Use strong Wi-Fi signals with high-gain antennas.
Employ frequency-hopping technologies like FHSS.
Implement robust encryption and strong passwords.
Ethical Considerations
Jamming should never be used maliciously.
Ensure you have proper authorization before testing.
Avoid disrupting public or emergency services.
License
This project is licensed under the MIT License. See LICENSE for more details.

Contributors
Sandesh Basnet
Aayan K.C
Aaditya Roila
Ronak Kunwar
Feel free to raise issues or contribute to this project.

Q&A
If you have any questions, feel free to open an issue or contact us directly via this repository.

