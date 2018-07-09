void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.print(digitalRead(7));
  Serial.print("|");
  Serial.print(digitalRead(6));
  Serial.print("|");
  Serial.print(digitalRead(5));
  Serial.print("|");
  Serial.print(digitalRead(4));
  Serial.print("|");
  Serial.print(digitalRead(3));
  Serial.print("|");
  Serial.print(digitalRead(2));
  Serial.print("|");
  Serial.print(analogRead(5));
  Serial.print("|");
  Serial.print(analogRead(4));
  Serial.print("|");
  Serial.print(analogRead(3));
  Serial.print("|");
  Serial.print(analogRead(2));
  Serial.print("|");
  Serial.print(analogRead(1));
  Serial.print("|");
  Serial.print(analogRead(0));
  Serial.print("|");
  Serial.println(" ");
}
