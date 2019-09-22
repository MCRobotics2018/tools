const char ADDR[] = {6, 7, 8, 9};
//#define CLOCK 2
void setup() {
  // put your setup code here, to run once:
  for (int n=0; n<4; n+=1) {
    pinMode(ADDR[n], INPUT);
  }
  //pinMode(CLOCK, INPUT);

  //attachInterrupt(digitalPinToInterrupt(CLOCK), onClock, FALLING);
  
  Serial.begin(57600);
}

void onClock() {
  // put your main code here, to run repeatedly:
 // for (int n=0; n<4; n+=1) {
  //  int bit = digitalRead(ADDR[n]) ? 1 : 0;
//    Serial.print(bit);
//  }
 // Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int n=0; n<4; n+=1) {
    int bit = digitalRead(ADDR[n]) ? 1 : 0;
    Serial.print(bit);
  }
  Serial.println();
}
