const int leftEdgeSensorPin = 2;   // Pin for the left edge sensor
const int rightEdgeSensorPin = 3;  // Pin for the right edge sensor

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  
  pinMode(leftEdgeSensorPin, INPUT);   // Set the left edge sensor pin as input
  pinMode(rightEdgeSensorPin, INPUT);  // Set the right edge sensor pin as input
}

void loop() {
  int leftSensorState = digitalRead(leftEdgeSensorPin);
  int rightSensorState = digitalRead(rightEdgeSensorPin);
  
  Serial.print("Left Edge Sensor: ");
  Serial.println(leftSensorState == HIGH ? "Edge Detected!" : "No Edge Detected");
  
  Serial.print("Right Edge Sensor: ");
  Serial.println(rightSensorState == HIGH ? "Edge Detected!" : "No Edge Detected");
  
  delay(1000); // Delay to avoid rapid Serial Monitor output
}
