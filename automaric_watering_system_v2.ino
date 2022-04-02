#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);


int sens_1 = A2;
int sens_2 = A3;
int motor_pin = 8;
int led=11;

void setup(){

  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
  display.clearDisplay();
  
  pinMode(sens_1, INPUT);
  pinMode(sens_2, INPUT);
  pinMode(motor_pin, OUTPUT);
  pinMode(led,OUTPUT);
}

void loop(){
  float sen_1_read = analogRead(sens_1);
  float sen_2_read = analogRead(sens_2);

  Serial.print("");
  Serial.print("Sensor 1:");
  Serial.println(sen_1_read);
  Serial.print("Sensor 2:");
  Serial.print(sen_2_read);
  Serial.println("");

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.print("Sen_1:");
  display.println(sen_1_read);
  display.print("Sen_2:");
  display.print(sen_2_read);
  display.display();
  display.clearDisplay();
  delay(1000);

  if (sen_1_read < 450){
    digitalWrite(led,HIGH);
    digitalWrite(motor_pin,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    digitalWrite(motor_pin,LOW);
    delay(1000);
    
  }
  

  if (sen_1_read < 450){
    digitalWrite(led,HIGH);
    digitalWrite(motor_pin,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    digitalWrite(motor_pin,LOW);
    delay(1000);
    
  delay(5000);
}

}
