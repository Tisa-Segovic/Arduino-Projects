int pushButton2 = 2;
int buttonState2;
int ledPin12 = 12;

int prevValue = 0;
int currentValue = 0;


void setup() {
  Serial.begin(9600);

  pinMode(pushButton2, INPUT);
  pinMode(ledPin12, OUTPUT);
  
}

void loop() {
  buttonState2 = digitalRead(pushButton2);
//  Serial.print("Button Two:  ");
//  Serial.println(buttonState2);

  Serial.write(buttonState2);

  delay(100);

}
