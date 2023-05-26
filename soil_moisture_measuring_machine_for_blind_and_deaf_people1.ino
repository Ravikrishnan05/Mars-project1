// C++ code
//
int soilmoisture = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  soilmoisture = analogRead(A0);
  Serial.println(soilmoisture);
  if (soilmoisture <= 100) {
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    Serial.println("please pour water");
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}