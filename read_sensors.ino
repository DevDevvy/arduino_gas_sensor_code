void setup() {
// start serial port at 9600 bps:
  Serial.begin(9600);
}

void loop() {
    // read the inputs from pins
  int MQ8Sensor = analogRead(A0);
  Serial.print("MQ8:");
  Serial.print(MQ8Sensor);
  Serial.print(",");

  int MQ4Sensor = analogRead(A1);
  Serial.print("MQ4:");
  Serial.print(MQ4Sensor);
  Serial.print(",");

  int MQ9Sensor = analogRead(A2);
  Serial.print("MQ9:");
  Serial.print(MQ9Sensor);
  Serial.print(",");
  
  int MQ7Sensor = analogRead(A3);
  Serial.print("MQ7:");
  Serial.print(MQ7Sensor);
  Serial.print(",");

  int MQ135Sensor = analogRead(A4);
  Serial.print("MQ135:");
  Serial.print(MQ135Sensor);
  // print a new line to separate the readings
  Serial.println();
  // 2 seconds to match the interface readings
  delay(2000);
}
