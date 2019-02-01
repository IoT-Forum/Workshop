const int temp = A0;
float tempc;

void setup() {
  // put your setup code here, to run once:

  pinMode(temp, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tempc = analogRead(temp);
  Serial.println(tempc);
  tempc = tempc*0.48;
  Serial.print("temperature :");
  Serial.println(tempc);
  delay(1000);
}
