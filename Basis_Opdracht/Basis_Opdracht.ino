int linkerPin = 11; 
int middenPin = 10;
int rechterPin = 9;


void setup() {
  pinMode(linkerPin, OUTPUT);
  pinMode(middenPin, OUTPUT);
  pinMode(rechterPin, OUTPUT);
}



void loop() {
  digitalWrite(linkerPin, HIGH);
  digitalWrite(middenPin, LOW);
  digitalWrite(rechterPin, LOW);

 delay(10000);
 digitalWrite(linkerPin, LOW);
 digitalWrite(middenPin, HIGH);
 digitalWrite(rechterPin, LOW);

 delay(10000);
 digitalWrite(linkerPin, LOW);
 digitalWrite(middenPin, LOW);
 digitalWrite(rechterPin, HIGH);


  

  delay(10000);

}
