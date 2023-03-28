  #include <Servo.h>
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;
int counterL=0;
int counterB=0;
const int trigPin2 = 11;
const int echoPin2 = 12;
// defines variables
long duration2;
int distance2;
Servo myservo;
int pos = 0;
void setup() {
  myservo.attach(8);
  myservo.write(0);
  pinMode(trigPin, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echoPin2, INPUT);   // Sets the echoPin as an Input
                              // Sets the echoPin as an Input
  Serial.begin(9600);
delay(2000);
  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 90; pos += 3) {  

    myservo.write(pos);
    digitalWrite(trigPin, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    // Serial.print("Distance: ");
    // Serial.println(distance);  
    digitalWrite(trigPin2, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin2, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = duration2 * 0.034 / 2;
    // Serial.print("Distance22222: ");
    // Serial.println(distance2);     
    if(distance<25){
      counterL++;
    } 
    else if(distance2<25){
      Serial.println("RRRRRRRRRRRRRRRRRRRRRRRRRRR");
      counterL=0;
    }
    else{
      counterL=0;
    }
    if(counterL>7 ){
      Serial.println("LLLLLLLLLLLLLLLLLLLLLLLLLLLLL");
      counterL=0;
    }
  }
  for (pos = 90; pos <= 180; pos += 3) {  

myservo.write(pos);
    digitalWrite(trigPin, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    // Serial.print("Distance: ");
    // Serial.println(distance);  
    digitalWrite(trigPin2, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin2, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = duration2 * 0.034 / 2;
    // Serial.print("Distance22222: ");
    // Serial.println(distance2);     
   if(distance<25){
      counterB++;
    } 
    else if(distance2<25){
      Serial.println("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
      counterB=0;
    }
    else{
      counterB=0;
    }
    if(counterB>7 ){
      Serial.println("BBBBBBBBBBBBBBBBBBBBBBBBB");
      counterB=0;
    }
                   
  }
  for (pos = 180; pos >= 90; pos -= 3) {  
   myservo.write(pos);
    digitalWrite(trigPin, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    // Serial.print("Distance: ");
    // Serial.println(distance);  
    digitalWrite(trigPin2, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin2, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = duration2 * 0.034 / 2;
    // Serial.print("Distance22222: ");
    // Serial.println(distance2);     
   if(distance<25){
      counterB++;
    } 
    else if(distance2<25){
      Serial.println("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
      counterB=0;
    }
    else{
      counterB=0;
    }
    if(counterB>7 ){
      Serial.println("BBBBBBBBBBBBBBBBBBBBBBBBB");
      counterB=0;
    }

  }
  for (pos = 90; pos >= 0; pos -= 3) {  
myservo.write(pos);
    digitalWrite(trigPin, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    // Serial.print("Distance: ");
    // Serial.println(distance);  
    digitalWrite(trigPin2, LOW);
    // delayMicroseconds(2);
    digitalWrite(trigPin2, HIGH);
    // delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    duration2 = pulseIn(echoPin2, HIGH);
    distance2 = duration2 * 0.034 / 2;
    // Serial.print("Distance22222: ");
    // Serial.println(distance2);     
    if(distance<25){
      counterL++;
    } 
    else if(distance2<25){
      Serial.println("RRRRRRRRRRRRRRRRRRRRRRRRRRR");
      counterL=0;
    }
    else{
      counterL=0;
    }
    if(counterL>7 ){
      Serial.println("LLLLLLLLLLLLLLLLLLLLLLLLLLLLL");
      counterL=0;
    }

  }
}
