# 🔧 Arduino Projects

A collection of small projects made using my **Elegoo UNO R3** board.

This repository represents my first steps into the world of electronics and embedded programming.

---

## 📁 Repository Structure

---

### 🔴 MyBlink

> 🧠 *My very first Arduino program ever.*

This was the first sketch I successfully ran on an **Arduino UNO** board when I was **15 years old**.

#### ✨ Description
The program simply blinks the built-in LED of the Arduino UNO board every **0.1 seconds**.

- **Board:** Arduino UNO / Elegoo UNO R3  
- **Default LED Pin:** `13`  
- **Blink Interval:** `100 ms`

#### 🚀 What it does
- Turns the LED on
- Waits 0.1 seconds
- Turns the LED off
- Waits 0.1 seconds
- Repeats forever

A classic project, but an unforgettable milestone ❤️

#### 🛠️ Requirements
- Arduino UNO / Elegoo UNO R3
- Arduino IDE
- USB cable

---



### 🎶 MyUltrasonicDetection


> 🧠 *My first approach to ultrasonic sensors.*

This is the first program I ran using an **ultrasonic sensor**.

#### ✨ Description
The program simply compute the distance detected from the SR04 ultrasonic sensor every **0.1 seconds**. The TRIGGER PIN and the ECHO PIN are selected on the 12 and 11 PIN of the board. 
Also a LED is managed using a resistor and the PIN 5 of the UNO board. If the detected object from the sensor is below 50cm, the LED is turned ON, otherwise it's turned OFF.

- **Board:** Arduino UNO / Elegoo UNO R3  
- **Default TRIGGER Pin:** `12`  
- **Default ECHO Pin:** `11`
- **Default LED Pin:** `5`    
- **Check Interval:** `100 ms`

#### 🚀 What it does
- Measurement of the ultrasonic values
- Computation of the object distance
- Check of the LED state
- Waits 0.1 seconds
- Repeats forever


#### 🛠️ Requirements
- Arduino UNO / Elegoo UNO R3
- Arduino IDE
- USB cable
- 220 Ohm resistor
- SR04 Ultrasonic sensor

---

## 📌 Notes
This repository is mainly for learning, experimentation, and nostalgia.  
More projects may be added in the future!

---

