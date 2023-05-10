const int UVLight = 8;
const int button = 2;
const int motionSensor = 3;
const int relay = A5;
int currentState= 0;
int previousState= LOW;
void setup() {
  pinMode(UVLight, OUTPUT);
  pinMode(button, INPUT);
  pinMode(motionSensor, INPUT);
  pinMode(relay, OUTPUT);
  digitalWrite(UVLight,LOW);
}

void loop() {
  currentState=digitalRead(motionSensor);
  if(currentState==HIGH){
    digitalWrite(UVLight,HIGH);
    digitalWrite(relay,HIGH);
    if(previousState==LOW){
    previousState=HIGH;
    }
  }
  else{
    digitalWrite(UVLight,LOW);
    digitalWrite(relay,LOW);
    if(previousState==HIGH){
      previousState=LOW;
    }
  }
}
