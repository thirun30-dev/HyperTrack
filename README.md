# 🏎️ HYPERTRACK - ESP32 Bluetooth Controlled Robo Race Bot

A high-performance **4WD Robo Race Bot** powered by an **ESP32**, dual **BTS7960 (IBT-2) motor drivers**, and a **3S LiPo battery**. The robot is controlled wirelessly through Bluetooth using a smartphone, making it suitable for robotics competitions, learning embedded systems, and rapid prototyping.

---

## 📸 Project Overview

This project uses:

- ESP32 as the main controller
- Two BTS7960 high-current motor drivers
- Four 12V DC geared motors
- 3S LiPo battery for power
- LM2596 buck converter for regulated 5V supply
- Bluetooth communication for wireless control

The bot supports:

✅ Forward Movement  
✅ Backward Movement  
✅ Left Turn  
✅ Right Turn  
✅ Speed Control  
✅ Differential Steering

---

## 🔧 Hardware Components

| Component | Quantity |
|------------|----------|
| ESP32 Development Board | 1 |
| BTS7960 (IBT-2) Motor Driver | 2 |
| 12V DC Geared Motor | 4 |
| 3S LiPo Battery (11.1V) | 1 |
| LM2596 Buck Converter | 1 |
| Chassis & Wheels | 1 Set |
| FlySky FS-i6 Receiver (Optional) | 1 |

---

## ⚡ Wiring Configuration

### Left Motor Driver

| BTS7960 | ESP32 |
|----------|--------|
| RPWM | GPIO 32 |
| LPWM | GPIO 33 |
| R_EN | 5V |
| L_EN | 5V |

### Right Motor Driver

| BTS7960 | ESP32 |
|----------|--------|
| RPWM | GPIO 14 |
| LPWM | GPIO 26 |
| R_EN | 5V |
| L_EN | 5V |

### FlySky Receiver (Optional)

| Receiver Channel | ESP32 |
|------------------|--------|
| CH1 | GPIO 35 |
| CH2 | GPIO 34 |
| CH5 | GPIO 39 |

---

## 📱 Bluetooth Control

The ESP32 creates a Bluetooth device named:

```text
RoboRaceBot
```

Connect using any Bluetooth terminal application.

### Supported Commands

| Command | Action |
|----------|----------|
| F | Forward |
| B | Backward |
| L | Turn Left |
| R | Turn Right |
| S | Stop |
| 0-9 | Speed Control |

### Speed Levels

| Command | Speed |
|----------|----------|
| 0 | 0% |
| 1 | 10% |
| 2 | 20% |
| 3 | 30% |
| 4 | 40% |
| 5 | 50% |
| 6 | 60% |
| 7 | 70% |
| 8 | 80% |
| 9 | 100% |

---

## 🚀 Getting Started

### 1. Clone Repository

```bash
git clone https://github.com/thirun30-dev/HyperTrack.git
```

### 2. Open Arduino IDE

Install the following:

- ESP32 Board Package
- BluetoothSerial Library

### 3. Upload Code

Select:

```text
Board: ESP32 Dev Module
```

Upload the source code.

### 4. Connect Bluetooth

1. Power ON the robot
2. Pair with:

```text
RoboRaceBot
```

3. Open Bluetooth Terminal App
4. Send control commands

---

## 🏗️ Project Structure

```text
ESP32-RoboRaceBot/
│
├── Code/
│   └── Bluetooth_Control.ino
│
├── Circuit_Diagram/
│   └── Wiring_Diagram.png
│
├── Images/
│   └── Robot_Photos
│
└── README.md
```

---

## 🔋 Power Distribution

### Motor Supply

```text
3S LiPo Battery (11.1V)
        │
        ├── BTS7960 Left
        └── BTS7960 Right
```

### Controller Supply

```text
3S LiPo
    │
LM2596 Buck Converter
    │
   5V
    │
  ESP32
```

---

## 🎯 Applications

- Robo Race Competitions
- Bluetooth-Controlled Vehicles
- Robotics Projects
- Embedded Systems Learning
- ESP32 Motor Control Experiments
- Autonomous Robot Development

---

## 🔮 Future Enhancements

- FlySky FS-i6 Remote Control Mode
- Obstacle Avoidance
- Line Following
- Autonomous Navigation
- ROS 2 Integration
- Mobile Joystick Application
- Battery Monitoring System
- Telemetry Dashboard

---

## 🛠️ Technologies Used

- Arduino IDE
- ESP32
- C++
- Bluetooth Classic
- PWM Motor Control
- BTS7960 Driver

---

## 📜 License

This project is licensed under the MIT License.

Feel free to use, modify, and distribute it for educational and personal projects.

---

## 👨‍💻 Author

### Thirunavukkarasu Veeramani

Robotics & Automation Engineering Student  
BS in Data Science – IIT Madras

### Interests

- Robotics
- AI/ML
- Embedded Systems
- Autonomous Vehicles
- ROS Development

---

⭐ If you found this project useful, please give it a star and share it with other robotics enthusiasts!
