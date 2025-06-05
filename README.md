# 🚗⚙️ Smart Servo Steering Car with Button Controls  
### Control Your Car Like a Pro — With Just 4 Buttons!

Bring your Arduino car to life with button-based movement and precise servo-powered steering. This project combines **DC motor control** and **servo steering** to let your robotic car turn, move, and respond like a real vehicle.

---

## 🔧 Components Needed

| Component       | Quantity | Notes                     |
|----------------|----------|---------------------------|
| Arduino Uno     | 1        | Or any compatible board   |
| Servo Motors    | 2        | For front wheel steering  |
| DC Motors       | 2        | For rear wheel movement   |
| Motor Driver    | 1        | L298N or similar          |
| Push Buttons    | 4        | For user input control    |
| Jumper Wires    | As needed |                          |
| Breadboard      | Optional | For neat connections      |
| Power Supply    | 1        | Battery pack or USB       |

---

## 📌 Wiring and Pin Mapping

| Function              | Arduino Pin |
|-----------------------|-------------|
| Front Left Servo      | D5          |
| Front Right Servo     | D6          |
| Left Motor Enable     | D10         |
| Right Motor Enable    | D11         |
| Left Motor Inputs     | D8, D9      |
| Right Motor Inputs    | D12, D13    |
| Button - Forward      | D2          |
| Button - Backward     | D3          |
| Button - Left         | D4          |
| Button - Right        | D7          |

---

## 🎮 Control System

- **Forward** (D2): Car moves forward.
- **Backward** (D3): Car moves in reverse.
- **Left** (D4): Wheels turn left via servo.
- **Right** (D7): Wheels turn right via servo.
- **No input?** The car stops and centers its wheels.

---

## 🚀 Features

✅ Realistic steering using servo motors  
✅ Smooth forward and backward driving  
✅ Easy control with just 4 buttons  
✅ Auto-centering when idle  
✅ Beginner-friendly code and setup

---

## 💻 Code Overview

- Uses the `Servo.h` library to control front-wheel direction.
- Reads button inputs using `INPUT_PULLUP` for reliability.
- Drives DC motors with direction control via `digitalWrite`.
- Modular functions handle:
  - `moveMotorsForward()`  
  - `moveMotorsBackward()`  
  - `stopMotors()`  
  - `turnServosLeft()`  
  - `turnServosRight()`  
  - `centerServos()`

---

## 🧪 How to Use

1. Build the circuit using the wiring guide.
2. Upload the code to your Arduino board.
3. Power the car with batteries or USB.
4. Press buttons to control movement and steering.
5. Watch your car respond instantly!

---

## 📝 Tips & Customization

