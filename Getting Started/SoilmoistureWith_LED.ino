void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(14,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int SoilMoisture;
SoilMoisture = 4095- analogRead(34);
if (SoilMoisture < 1000)
{
  Serial.println("Dry");
  digitalWrite(14,LOW);
  }
else
{
  Serial.println("Wet");
  digitalWrite(14,HIGH);
}

Serial.println(SoilMoisture);
delay(1000);
}
