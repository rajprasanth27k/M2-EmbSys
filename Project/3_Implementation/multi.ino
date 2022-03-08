#include "head.h"
#include <LiquidCrystal.h>

const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


int led=7;
int buzzer=6;

int ld1=0,ld2=0;
const int button1 = 2;  
const int button2 = 3; 
//const int gas = A2;


 //float gass;



void setup()
{
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(led, OUTPUT);
    lcd.begin(16, 2);
    
    lcd.setCursor(0, 0);
    lcd.print("CROP MONITORING");

    
}


void loop() 
{
     int sensorValue = analogRead(A2);
     float gass= sensorValue * (5.0 / 1023.0);
     ld1= digitalRead(button1);
     ld2= digitalRead(button2);
      lcd.setCursor(0, 0);
      lcd.print("CROP MONITORING");

      
  
    if(gass>2)
    {
         lcd.clear();
         buzzer_on(buzzer);  
         lcd.setCursor(0, 0);
         lcd.print("FIRE Detected");  
         delay(2000);      
    }
    else
    {
          buzzer_off(buzzer);    
    }    
    if(ld1==HIGH && ld2==LOW)
    {
         lcd.clear();
         led_on(led);
         lcd.setCursor(0, 2);
         lcd.print("DRY FIELD"); 
         delay(2000); 
         
            
    }
    else
    {

         lcd.setCursor(0, 2);
         lcd.print("WET FIELD"); 
         led_off(led);
    }
    if(ld1==LOW && ld2==HIGH)
    {
         
         led_off(led);
         
    }                         
}
