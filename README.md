# HyperTrack
ESP32 Bluetooth Controlled Robo Race Bot

🏎️ A high-speed Bluetooth-controlled Robo Race Bot built using ESP32, BTS7960 (IBT-2) Motor Drivers, and 12V DC Gear Motors. The robot can be controlled wirelessly through a smartphone using Bluetooth commands for forward, backward, left, right, and speed control.

Features
Bluetooth control using ESP32 Classic Bluetooth
Differential drive steering
Adjustable motor speed (0–100%)
Dual BTS7960 high-current motor drivers
Four-wheel drive configuration
Compatible with Android Bluetooth terminal applications
Expandable for FlySky RC control and autonomous navigation
Hardware Used
ESP32 Development Board
2 × BTS7960 (IBT-2) Motor Drivers
4 × 12V DC Gear Motors
3S LiPo Battery (11.1V)
LM2596 Buck Converter (5V Output)
Chassis and Wheels
Smartphone with Bluetooth Terminal App
Pin Configuration
Left Motor Driver
RPWM → GPIO 32
LPWM → GPIO 33
Right Motor Driver
RPWM → GPIO 14
LPWM → GPIO 26
Receiver Inputs (Optional)
CH1 → GPIO 35
CH2 → GPIO 34
CH5 → GPIO 39
Bluetooth Commands
Command	Function
F	Forward
B	Backward
L	Turn Left
R	Turn Right
S	Stop
0–9	Speed Control
Applications
Robo Race Competitions
Robotics Learning Projects
Wireless Vehicle Control
ESP32 Motor Control Experiments
Educational Robotics
Future Improvements
FlySky FS-i6 RC Mode
Autonomous Navigation
Obstacle Avoidance
ROS Integration
Telemetry and Battery Monitoring
Mobile App with Joystick Control
Repository Contents
ESP32 Bluetooth Control Code
Circuit Diagram
Wiring Reference
Project Documentation
Author

Thirunavukkarasu Veeramani
Robotics & Automation Engineering Student
Passionate about Robotics, AI/ML, Embedded Systems, and Autonomous Vehicles.
