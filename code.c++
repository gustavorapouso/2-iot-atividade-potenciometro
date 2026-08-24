Servo servoMotor;

int potenciomentro = A0;

int valorLido;
int angulo;

void setup(){ 
 servoMotor .attach(9);
}

void loop(){
  
  valorLido = analogRead(potenciomentro);
  angulo = map(valorLido, 0, 1023, 0, 180);
  servoMotor .write(angulo);
  
  delay(15);
}
