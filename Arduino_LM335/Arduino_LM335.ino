#define TPIN A0
uint16_t adc_read;
float temp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  adc_read = analogRead(TPIN);
  temp = (adc_read * 5.0/1023.0) / 0.01;
  Serial.print("temperature: ");
  Serial.print(temp);
  Serial.print(" Kelvin. ");
  Serial.print(temp-273);
  Serial.print(" Celcius.");
  Serial.println();
}
