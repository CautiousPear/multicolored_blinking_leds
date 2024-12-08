int redLED=13;
int blueLED=12;
int greenLED=11;

void blinkLED(int pin, int times, int delayTime);

void setup() {
  // put your setup code here, to run once:
pinMode (redLED,OUTPUT);
pinMode (blueLED,OUTPUT);
pinMode (greenLED,OUTPUT);
}
void loop() {
    blinkLED(redLED, 5, 100);
    blinkLED(blueLED, 10, 200);
    blinkLED(greenLED, 15, 300);
}

void blinkLED(int pin, int times, int delayTime) {
    for (int i = 0; i < times; i++) {
        digitalWrite(pin, HIGH);
        delay(delayTime);
        digitalWrite(pin, LOW);
        delay(delayTime);
    }
}
