#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// Left Driver
#define L_RPWM 32
#define L_LPWM 33

// Right Driver
#define R_RPWM 14
#define R_LPWM 26

const int PWM_FREQ = 1000;
const int PWM_RES = 8;

const int CH_L_RPWM = 0;
const int CH_L_LPWM = 1;
const int CH_R_RPWM = 2;
const int CH_R_LPWM = 3;

int motorSpeed = 255;

void setup() {

  Serial.begin(115200);

  SerialBT.begin("RoboRaceBot");

  ledcSetup(CH_L_RPWM, PWM_FREQ, PWM_RES);
  ledcSetup(CH_L_LPWM, PWM_FREQ, PWM_RES);
  ledcSetup(CH_R_RPWM, PWM_FREQ, PWM_RES);
  ledcSetup(CH_R_LPWM, PWM_FREQ, PWM_RES);

  ledcAttachPin(L_RPWM, CH_L_RPWM);
  ledcAttachPin(L_LPWM, CH_L_LPWM);

  ledcAttachPin(R_RPWM, CH_R_RPWM);
  ledcAttachPin(R_LPWM, CH_R_LPWM);

  stopMotors();

  Serial.println("Bluetooth Ready");
}

void loop() {

  if (SerialBT.available()) {

    char cmd = SerialBT.read();

    Serial.println(cmd);

    if (cmd >= '0' && cmd <= '9') {
      motorSpeed = map(cmd - '0', 0, 9, 0, 255);
      return;
    }

    switch (cmd) {

      case 'F':
        forward();
        break;

      case 'B':
        backward();
        break;

      case 'L':
        left();
        break;

      case 'R':
        right();
        break;

      case 'S':
        stopMotors();
        break;
    }
  }
}

void forward() {

  ledcWrite(CH_L_RPWM, motorSpeed);
  ledcWrite(CH_L_LPWM, 0);

  ledcWrite(CH_R_RPWM, motorSpeed);
  ledcWrite(CH_R_LPWM, 0);
}

void backward() {

  ledcWrite(CH_L_RPWM, 0);
  ledcWrite(CH_L_LPWM, motorSpeed);

  ledcWrite(CH_R_RPWM, 0);
  ledcWrite(CH_R_LPWM, motorSpeed);
}

void left() {

  ledcWrite(CH_L_RPWM, 0);
  ledcWrite(CH_L_LPWM, motorSpeed);

  ledcWrite(CH_R_RPWM, motorSpeed);
  ledcWrite(CH_R_LPWM, 0);
}

void right() {

  ledcWrite(CH_L_RPWM, motorSpeed);
  ledcWrite(CH_L_LPWM, 0);

  ledcWrite(CH_R_RPWM, 0);
  ledcWrite(CH_R_LPWM, motorSpeed);
}

void stopMotors() {

  ledcWrite(CH_L_RPWM, 0);
  ledcWrite(CH_L_LPWM, 0);

  ledcWrite(CH_R_RPWM, 0);
  ledcWrite(CH_R_LPWM, 0);
}