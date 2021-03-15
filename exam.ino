int val1;
int val2;
int val3;
int temp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = analogRead(A0);
  val2 = analogRead(A1);
  val3 = analogRead(A2);
  temp = ((5.0 / 1023.0) * val1) * 100;
  Serial.print("Temperature: ");
  Serial.println(temp);
  Serial.print("Voltage: ");
  Serial.println((5.0 / 1023.0) * val2);
  if(val3 >= 800) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
  delay(250);
}
