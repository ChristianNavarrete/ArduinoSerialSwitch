

int LEDRedPin = 5;
int LEDYellowPin = 4;
int LEDGreenPin = 3;
int LEDWhitePin = 2;

void setup() {
  // put your setup code here, to run once:
  
  //setup serial at 9600 baud
  Serial.begin(9600);

  pinMode(LEDRedPin, OUTPUT);
  pinMode(LEDYellowPin, OUTPUT);
  pinMode(LEDGreenPin, OUTPUT);
  pinMode(LEDWhitePin, OUTPUT);

}


void toggleLED(int LEDPin) {
  digitalWrite(LEDPin, !digitalRead(LEDPin));
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int inByte = Serial.read();

    switch (inByte)
      {
      case 'r':
        toggleLED(LEDRedPin);
        break;
      case 'y':
        toggleLED(LEDYellowPin);
        break;
      case 'g':
        toggleLED(LEDGreenPin);
        break;
      case 'w':
        toggleLED(LEDWhitePin);
        break;
      default:
        digitalWrite(LEDRedPin, LOW);
        digitalWrite(LEDYellowPin, LOW);
        digitalWrite(LEDGreenPin, LOW);
        digitalWrite(LEDWhitePin, LOW);
        break;
      }
      
    }
  

}









