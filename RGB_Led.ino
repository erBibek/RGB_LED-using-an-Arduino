int redLight = 8;
int greenLight = 6;
int blueLight = 7;

int redDelay = 2000;
int greenDelay = 2000;
int blueDelay = 2000;


void setup() {
  
  Serial.begin(9600);
  pinMode(redLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(blueLight, OUTPUT);
}

void loop() {
  digitalWrite(redLight, HIGH);
  Serial.println("RED Light is ON");
  delay(redDelay);
  digitalWrite(redLight, LOW);
  Serial.println("LED Light is OFF");
  delay(redDelay);

  digitalWrite(greenLight, HIGH);
  Serial.println("GREEN Light is ON");
  delay(greenDelay);
  digitalWrite(greenLight,LOW);
  Serial.println("GREEN Light is OFF");
  delay(greenDelay);

  digitalWrite(blueLight, HIGH);
  Serial.println("BLUE Light is ON");
  delay(blueDelay);
  digitalWrite(blueLight, LOW); 
  Serial.println("BLUE Light is OFF");
  delay(blueDelay);
}