#include <Servo.h>
Servo servo1; // front left tire - pin 5
Servo servo2; // front right tire - pin 6
const int enableMotor1 = 10; // left motor
const int enableMotor2 = 11; // right motor
const int motor1Input1 = 8;
const int motor1Input2 = 9;
const int motor2Input1 = 12;
const int motor2Input2 = 13;
// Buttons for movement
const int buttonFront = 2;
const int buttonBack = 3;
const int buttonLeft = 4;
const int buttonRight = 7;
// Servo positions for steering
const int servoCenterPos = 90;
const int servoLeftPos = 45; // turn left
const int servoRightPos = 135; // turn right
void setup() {
servo1.attach(5);
servo2.attach(6);
// Set initial servo position (centered)
servo1.write(servoCenterPos);
servo2.write(servoCenterPos);
pinMode(enableMotor1, OUTPUT);
pinMode(enableMotor2, OUTPUT);
pinMode(motor1Input1, OUTPUT);
pinMode(motor1Input2, OUTPUT);
pinMode(motor2Input1, OUTPUT);
pinMode(motor2Input2, OUTPUT);
pinMode(buttonFront, INPUT_PULLUP);
pinMode(buttonBack, INPUT_PULLUP);
pinMode(buttonLeft, INPUT_PULLUP);
pinMode(buttonRight, INPUT_PULLUP);
stopMotors();
}
void loop() {
bool frontPressed = digitalRead(buttonFront) == LOW;
bool backPressed = digitalRead(buttonBack) == LOW;
bool leftPressed = digitalRead(buttonLeft) == LOW;
bool rightPressed = digitalRead(buttonRight) == LOW;
// Check if any button is pressed
if (frontPressed || backPressed || leftPressed || rightPressed) {
// Motor control
if (frontPressed) {
moveMotorsForward();
} else if (backPressed) {
moveMotorsBackward();
} else {
stopMotors();
}
// Servo steering control
if (leftPressed) {
turnServosLeft();
} else if (rightPressed) {
turnServosRight();
} else {
centerServos();
}
} else {
// No buttons pressed -> stop everything
stopMotors();
centerServos();
}
delay(20);
}
void moveMotorsForward() {
digitalWrite(enableMotor1, HIGH);
digitalWrite(motor1Input1, HIGH);
digitalWrite(motor1Input2, LOW);
digitalWrite(enableMotor2, HIGH);
digitalWrite(motor2Input1, HIGH);
digitalWrite(motor2Input2, LOW);
}
void moveMotorsBackward() {
digitalWrite(enableMotor1, HIGH);
digitalWrite(motor1Input1, LOW);
digitalWrite(motor1Input2, HIGH);
digitalWrite(enableMotor2, HIGH);
digitalWrite(motor2Input1, LOW);
digitalWrite(motor2Input2, HIGH);
}
void stopMotors() {
digitalWrite(enableMotor1, LOW);
digitalWrite(motor1Input1, LOW);
digitalWrite(motor1Input2, LOW);
digitalWrite(enableMotor2, LOW);
digitalWrite(motor2Input1, LOW);
digitalWrite(motor2Input2, LOW);
}
void turnServosLeft() {
servo1.write(servoLeftPos);
servo2.write(servoLeftPos);
}
void turnServosRight() {
servo1.write(servoRightPos);
servo2.write(servoRightPos);
}
void centerServos() {
servo1.write(servoCenterPos);
servo2.write(servoCenterPos);
}
