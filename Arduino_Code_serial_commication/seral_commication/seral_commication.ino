void setup() {
  // Creaste Serial Object
  Serial.begin(9600);
}

void loop() {
  // Ardiono waiting from serial coommunication
  while (Serial.available() == 0);
  
  // Read the Input
  int val  = Serial.read() - '0';
  
  //echo the ourput
  Serial.println(val);
  
  
  
  
}
