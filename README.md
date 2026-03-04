ESP32 Bluetooth & Voice Controlled Servo Motor
🔹 Project Overview
This project demonstrates wireless servo motor control using ESP32 with Bluetooth communication. The system supports both manual text commands and voice-based commands (converted to text via mobile application).
🔹 System Architecture
🔹 Modules Used
Input Module – Android Bluetooth Terminal App (Voice/Text Input)
Communication Module – ESP32 Bluetooth Serial
Processing Module – ESP32 Microcontroller
Actuation Module – SG90 Servo Motor
🔹 Technologies Used
ESP32
Arduino IDE (Embedded C)
Bluetooth Serial Communication
PWM (Pulse Width Modulation)
Android Voice-to-Text Interface
🔹 Features
✔ Wireless Control
✔ Angle-based Commands (0°, 90°, 180°)
✔ Voice Command Support
✔ Real-time Response
🔹 How It Works
User gives text/voice command from mobile app.
Mobile app converts voice to text (if voice used).
Text command is sent via Bluetooth.
ESP32 processes command and rotates servo accordingly.
🔹 Applications
Smart Door Lock
Robotic Arm Positioning
Remote Mechanical Control
IoT Automation Systems
🔹 Future Improvements
WiFi Web Dashboard
Multi-servo Control
Password Authentication
Sensor Feedback Integration
