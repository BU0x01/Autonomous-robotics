int ENA=5;
int ENB=6;
int IN1=7;
int IN2=8;
int IN3=9;
int IN4=11;
float d;
int degRot;
int left;
int right;
int wv;
float v;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ENA,OUTPUT);
pinMode(ENB,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);
digitalWrite(ENA,HIGH);
digitalWrite(ENB,HIGH);
}
 
void loop() {
v=1.5;
wv=(v-.35)/.0075;
left=wv;
right=wv;
setSpeed(left,right);
forward(8,v);
v=1.5;
wv=(v-.35)/.0075;
left=wv;
right=wv;
setSpeed(left,right);
backward(8,v);
  while(1==1){
 
  }
}
void setSpeed(int leftVal,int rightVal){
  analogWrite(ENA,leftVal);
  analogWrite(ENB,rightVal);
}
void forward(float d, float v){
float t;
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
t=d/v*1000;
delay(t);
stopCar();
}
void backward(float d, float v){
float t;
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
t=d/v*1000;
delay(t);
stopCar();
}
void turnRight(int deg){
  float t;
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
t=deg/345.*1000.;
Serial.println(deg);
delay(t);
stopCar();
}
void turnLeft(float deg){
  float t;
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
t=deg/345.*1000.;
Serial.println(deg);
delay(t);
stopCar();
}
void stopCar(){
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
}
 
void calF(){
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
delay(5000);
stopCar();
}
void calB(){
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
delay(5000);
stopCar();
}
void calR(){
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
delay(5000);
stopCar();
}
void calL(){
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
delay(5000);
stopCar();
}
