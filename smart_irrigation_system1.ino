int soilmosture = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  soilmosture = analogRead(A0);
  Serial.println(soilmosture);
  if (soilmosture <= 200) {
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
  } else {
    digitalWrite(8, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}