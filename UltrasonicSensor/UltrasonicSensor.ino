//Defining pin numbers for Ultrasonic Sensor
const int trigPin = 12;
const int echoPin = 11;

//Defing variables for Ultrasonic Sensor
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(200000000000);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000000000000);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;

  /*if(distance < 3){
   
  }
  else{
   
  }*/
Serial.println(distance);
   if(distance<15){
  digitalWrite(13, HIGH);}
  else
  digitalWrite(13, LOW);
}
//Defining pin numbers for Ultrasonic Sensor
const int trigPin = 12;
const int echoPin = 11;

//Defing variables for Ultrasonic Sensor
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(200000000000);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000000000000);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;

  /*if(distance < 3){
   
  }
  else{
   
  }*/
Serial.println(distance);
   if(distance<15){
  digitalWrite(13, HIGH);}
  else
  digitalWrite(13, LOW);
}
