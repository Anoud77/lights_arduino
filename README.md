# Arduino Traffic Light Control

## About

This Arduino sketch simulates a basic traffic light system using three LEDs: red, yellow, and green. The code controls the sequence and timing of these LEDs to mimic a standard traffic light pattern.

## Hardware

* Arduino board (e.g., Uno)
* 3 LEDs (red, yellow, green)
* 3 resistors (e.g., 220 ohms) to limit current to the LEDs
* Breadboard
* Jumper wires

## Connections

* Red LED:
    * Connect the positive (longer) leg of the red LED to Arduino pin 3 through a 220-ohm resistor.
    * Connect the negative (shorter) leg of the red LED to the Arduino GND.
* Yellow LED:
    * Connect the positive leg of the yellow LED to Arduino pin 4 through a 220-ohm resistor.
    * Connect the negative leg of the yellow LED to the Arduino GND.
* Green LED:
    * Connect the positive leg of the green LED to Arduino pin 5 through a 220-ohm resistor.
    * Connect the negative leg of the green LED to the Arduino GND.

## Code Explanation

```cpp
int redpin = 3;     // Pin connected to the red LED
int yellowpin = 4;  // Pin connected to the yellow LED
int greenpin = 5;   // Pin connected to the green LED

void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);      // Set the red pin as an output
  pinMode(yellowpin, OUTPUT);   // Set the yellow pin as an output
  pinMode(greenpin, OUTPUT);    // Set the green pin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenpin, HIGH);  // Turn on the green LED
  delay(5000);                   // Wait for 5 seconds
  digitalWrite(greenpin, LOW);   // Turn off the green LED
  digitalWrite(yellowpin, HIGH); // Turn on the yellow LED
  delay(3000);                   // Wait for 3 seconds
  digitalWrite(yellowpin, LOW);  // Turn off the yellow LED
  digitalWrite(redpin, HIGH);    // Turn on the red LED
  delay(5000);                   // Wait for 5 seconds
  digitalWrite(redpin, LOW);    // Turn off the red LED
}
Pin Definitions: The code begins by defining integer variables (redpin, yellowpin, greenpin) to store the Arduino pin numbers connected to each LED.setup() Function:The setup() function runs once when the Arduino board is powered on or reset.It uses the pinMode() function to configure the red, yellow, and green pins as OUTPUT pins. This tells the Arduino that these pins will be used to send signals (turn LEDs on or off).loop() Function:The loop() function runs continuously after the setup() function completes.It controls the sequence of the LEDs using the digitalWrite() function:digitalWrite(greenpin, HIGH); turns the green LED on.delay(5000); pauses the program for 5000 milliseconds (5 seconds), keeping the green LED on.digitalWrite(greenpin, LOW); turns the green LED off.The code then repeats this process for the yellow and red LEDs, with a 3-second delay for the yellow LED and 5 seconds for the red LED.The loop() function repeats this sequence indefinitely, creating the traffic light pattern.UsageConnect the hardware: Wire the LEDs and resistors to the Arduino board as described in the "Connections" section.Upload the code:Open the Arduino IDE.Copy and paste the code into a new sketch.Select the correct Arduino board and port from the "Tools" menu.Click the "Upload" button to upload the code to the Arduino board.Observe the traffic light sequence: Once the code is uploaded, the LEDs should cycle through the traffic light sequence: green for 5 seconds, yellow for 3 seconds, and red for 5 seconds, and then repeat.Future EnhancementsAdd a pedestrian crossing feature with a button and a different LED sequence.Implement a more realistic traffic light system with variable timing based on traffic sensors.Incorporate a microcontroller timer to create more accurate and non-blocking delays.Use a state machine to manage the traffic light sequence for more organized code.Add sound effects (e.g., beeping for pedestrian crossing).
