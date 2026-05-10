#define led1 11
#define led2 6

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  Serial.println("LEDs ON");
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); 
  
  Serial.println("LEDs OFF");
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);  
}