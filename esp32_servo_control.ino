#include <BluetoothSerial.h>
#include <ESP32Servo.h>

BluetoothSerial SerialBT;
Servo myServo;

int servoPin = 18;   // Change if needed

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_Servo");   // Bluetooth device name
  myServo.attach(servoPin);
  myServo.write(0);   // Initial position
}

void loop() {

  if (SerialBT.available()) {
    
    String command = SerialBT.readStringUntil('\n');
    command.trim();
    command.toLowerCase();

    Serial.println("Received: " + command);

    if (command == "0" || command == "zero" || command == "close") {
      myServo.write(0);
    }

    else if (command == "90" || command == "ninety") {
      myServo.write(90);
    }

    else if (command == "180" || command == "one eighty" || command == "open") {
      myServo.write(180);
    }
  }
}
