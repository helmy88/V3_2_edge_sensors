int pin_L = 3; // Edge left sensor pin
int pin_R = 2; // Edge right sensor pin

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  
  pinMode(pin_L, INPUT_PULLUP);
  pinMode(pin_R, INPUT_PULLUP);
}

void loop() {
  int status_L = digitalRead(pin_L);
  int status_R = digitalRead(pin_R);
  
  Serial.println("Edge Sensor Statuses:");
  Serial.print("Edge Left: ");
  Serial.println(status_L == LOW ? "Edge Detected!" : "No Edge Detected");
  
  Serial.print("Edge Right: ");
  Serial.println(status_R == LOW ? "Edge Detected!" : "No Edge Detected");
  
  delay(1000); // Delay to avoid rapid Serial Monitor output
}
