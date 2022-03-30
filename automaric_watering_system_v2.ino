int sens_1 = A0;
int sens_2 = A1;

void setup(){

  Serial.begin(9600);
  
  pinMode(sens_1, INPUT);
  pinMode(sens_2, INPUT);
}

void loop(){
  float sens_1_read = analogRead(sens_1);
  float sens_2_read = analogRead(sens_2);

  Serial.print("");
  Serial.print("Sensor 1:");
  Serial.println(sens_1_read);
  Serial.print("Sensor 2:");
  Serial.print(sens_2_read);
  Serial.println("");

  delay(1000);
}
