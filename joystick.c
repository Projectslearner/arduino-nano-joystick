/*
    Project name : Joystick
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-joystick
*/

// Define pins for the joystick
const int X_PIN = A0;
const int Y_PIN = A1;
const int BUTTON_PIN = 2;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the button pin as an input
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Enable internal pull-up resistor
}

void loop() {
  // Read the analog values from the joystick
  int xValue = analogRead(X_PIN);
  int yValue = analogRead(Y_PIN);

  // Read the digital state of the button
  int buttonState = digitalRead(BUTTON_PIN);

  // Print the values to the Serial Monitor
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState == LOW ? "Pressed" : "Released");

  // Add a small delay to avoid spamming the Serial Monitor
  delay(100);
}
