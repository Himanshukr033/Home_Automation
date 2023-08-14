# Project Name 

Home Automation 

## Description

This project aims to create a mobile-controlled home automation system that enables users to control room lighting and a fan through a mobile application. The system utilizes key components such as Arduino UNO, HC-05 Bluetooth module, a relay module, and a 9V battery to achieve seamless control and enhanced convenience.

## Components Used

- **Arduino UNO:** The central microcontroller that manages the system's operations and interactions.
- **HC-05 Bluetooth Module:** Enables wireless communication between the mobile app and the Arduino, providing control over the circuit.
- **Relay Module:** Comprising two relay switches for controlling two light bulbs and one relay for regulating the fan's operation.
- **9V Battery:** Power source for the Arduino, HC-05, and relay module, ensuring the system's functionality even during power disruptions.

## Circuit Configuration

- HC-05 and relay module are connected to the Arduino using specific pins (Rx-Tx on pins 2 and 3, and relay pins on pins 4, 5, and 6).
- To safeguard the HC-05 from voltage mismatch, 1k ohm and 2.2k ohm resistors are strategically placed to connect the Rx (HC-05) pin and Tx (Arduino) pin.
- Power for HC-05, Arduino, and relay module is provided by the 9V battery. This mix of voltage levels requires careful management to prevent damage to components.
- Live wires from the main supply are connected to the common pin of the relay module for each load.
- For each load (bulbs and fan), the positive terminal connects to the "Normally Closed" pin of the relay module, and the negative terminals are linked to the negative line from the main supply.

## Functionality
1. Users control the room lights and fan using a mobile application.
2. The Arduino processes commands from the app, triggering the appropriate relay switch to turn the lights or fan on/off.
3. The HC-05 module facilitates communication between the mobile app and the Arduino, enabling remote control from a distance.
4. The relay module acts as a switch for each load, providing reliable control over the devices.

## Prototype

![image](https://github.com/Himanshukr033/Home_Automation/assets/97483100/bb726847-0a1c-40ca-8015-45453756f94a)
sketch (block diagram)

![image](https://github.com/Himanshukr033/Home_Automation/assets/97483100/2b2f60fa-2b4f-4f04-977d-a8a0cc44ff99)
circuit diagram

![image](https://github.com/Himanshukr033/Home_Automation/assets/97483100/28dd29c2-39a1-4981-ae11-cfe195fbc2ae)![image](https://github.com/Himanshukr033/Home_Automation/assets/97483100/b756dd73-7064-41ab-8f9e-e6024ac007a7)  
App interface and command send from the app used

![image](https://github.com/Himanshukr033/Home_Automation/assets/97483100/dd6b5f3a-6b70-4734-87d7-780f67c09f2b)
photo of the Arduino circuit




This project showcases an innovative way to manage room amenities remotely, enhancing user comfort and energy efficiency. By leveraging Arduino and Bluetooth technology, the system offers an adaptable and user-friendly solution for home automation.
