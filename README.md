# OEDK Finger

## Overview
The OEDK Finger is an Arduino-based finger mirroring device designed to facilitate the learning of embedded electronics for bioengineering students. This project aims to provide an interactive and hands-on experience for students to grasp the fundamentals of embedded systems in the context of bioengineering applications.

## Features
- **Arduino-Based:** Utilizes Arduino microcontrollers for simplicity and accessibility.
- **Finger Mirroring:** Mimics finger movements to demonstrate the integration of electronics in bioengineering.
- **Educational Tool:** Tailored for bioengineering students to learn embedded electronics concepts in a practical manner.

## Getting Started

### Prerequisites
- Arduino IDE installed on your computer.
- Basic understanding of Arduino programming.

### Hardware Requirements
- Arduino board (Designed for nano)
- Micro servo motor
- Light detecting resistor (LDR)
- LED
- 2x 680 Ohm Resistors
- Jumper wires
- Heat shrink tubing
- 2x mini rubber bands
- Laser cut baseplate, topplate, and support
- 3 3d printed finger segments

### Assembly Instructions
DANNY FILL IN INSTRUCTIONS HERE AFTER FINALIZING CAD   1. Assemble finger according to what Danny says

2. The finger uses an LDR and an LED to simulate a flex sensor. Use heat-shrink tubing to connect the
LDR to the LED as shown below. The sensor measures the flex by detecting the amount of light that passes
through the system. Tape can be used to prevent cables from disconnecting. <br />
![image](https://github.com/leomarek/OEDK_finger/assets/56487792/2693f276-1ac7-4b0d-9f19-dfed4a240e7a)

3. Follow diagram below to connect circuit to breadboard. <br />
![image](https://github.com/leomarek/OEDK_finger/assets/56487792/ce20368d-40cd-4d03-a0fc-e5cbacdbcf8a)

5. Connect arduino to computer and upload provided code.


## Code Structure
The Arduino sketch (`finger_mirroring.ino`) is well-commented and organized. Key sections include:
- **Initialization:** Setting up pin configurations and initializing variables.
- **Sensor Reading:** Capturing data from the light detecting resistor to determine finger positions.
- **Motor Control:** Adjusting the servo motor based on sensor inputs.
- **Main Loop:** Continuous monitoring and updating of the finger mirroring mechanism.

## Usage
1. Connect the OEDK Finger to a power source.
2. Observe how the device mirrors finger movements.
3. Experiment with the code to understand the relationship between sensor readings and motor control.

## Contributing
We welcome contributions to enhance the OEDK Finger project. If you have ideas for improvements, bug fixes, or additional features, feel free to submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).

## Acknowledgments
- The OEDK Finger project is developed by Leo Marek and Danny Blacker.
- Special thanks to the [OEDK (Oshman Engineering Design Kitchen)](https://oedk.rice.edu/) for inspiration and support.

## Contact
For inquiries, please contact lnm7@rice.edu

Happy coding and finger mirroring!
