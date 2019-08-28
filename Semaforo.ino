void setup(){
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}
void sem1(){
	digitalWrite(6,HIGH);
  	digitalWrite(8,HIGH);
     	delay(3500);
    digitalWrite(6,LOW);
  	digitalWrite(8,LOW);
  		//delay(3500);
  	digitalWrite(5,HIGH);
  	digitalWrite(9,HIGH);
  		delay(3500);
  	digitalWrite(5,LOW);
  	digitalWrite(9,LOW);
  		//delay(350);
  	digitalWrite(7,HIGH);
  	digitalWrite(10,HIGH);
  		delay(1500);
  	digitalWrite(7,LOW);
  	digitalWrite(10,LOW);
}
void sem2(){
 	 digitalWrite(10,HIGH);
     	delay(3500);
    digitalWrite(10,LOW);
  		//delay(3500);
  	digitalWrite(8,HIGH);
  		delay(3500);
  	digitalWrite(8,LOW);
  		//delay(350);
  	digitalWrite(9,HIGH);
  		delay(1500);
  	digitalWrite(9,LOW);
}

void loop(){
	/*Serial.println("Hello world");
  	delay(100000000);*/
  	/*digitalWrite(7,HIGH);
     	delay(350);
    digitalWrite(7,LOW);
  		delay(350);
  	digitalWrite(6,HIGH);
  		delay(350);
  	digitalWrite(6,LOW);
  		delay(350);*/
  
  sem1();
  //sem2();
}
