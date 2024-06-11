### Joystick Module

#### Project Overview

The Joystick Module project demonstrates how to interface a joystick with an Arduino Nano. The joystick consists of two potentiometers (for X and Y axis movement) and a button. This project reads the X and Y values, along with the button state, and prints them to the serial monitor.

#### Components Needed

1. **Arduino Nano**
2. **Joystick Module**
3. **Jumper Wires**

### Block Diagram



#### Circuit Setup

1. **Connect Joystick Module to Arduino Nano:**
   - Connect the VCC pin of the joystick module to the 5V pin on the Arduino Nano.
   - Connect the GND pin of the joystick module to the GND pin on the Arduino Nano.
   - Connect the VRx pin (X axis) of the joystick module to the A0 pin on the Arduino Nano.
   - Connect the VRy pin (Y axis) of the joystick module to the A1 pin on the Arduino Nano.
   - Connect the SW pin (Button) of the joystick module to the D2 pin on the Arduino Nano.

#### Instructions

1. **Circuit Setup:**
   - Wire the joystick module to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Connect the Arduino Nano to your computer via USB.
   - Open the Arduino IDE and paste the provided code.
   - Upload the code to the Arduino Nano.

3. **Testing:**
   - Once the code is uploaded, open the serial monitor.
   - Move the joystick and press the button. The X, Y values, and button state will be printed to the serial monitor.

#### Applications

- **Game Controllers:** Use the joystick to build custom game controllers.
- **Robotics:** Control robot movement with the joystick module.
- **User Interfaces:** Integrate the joystick into various interactive projects requiring directional input and button presses.

#### Notes

- Ensure proper connections to avoid erroneous readings.
- Use `INPUT_PULLUP` mode for the button pin to utilize the internal pull-up resistor, making it easier to detect button presses.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-joystick)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner

