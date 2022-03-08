#include "head.h"


void buzzer_on(byte buzz)
{
     digitalWrite(buzz,HIGH);
    
}
void buzzer_off(byte buzz)
{
     digitalWrite(buzz,LOW);
}
void led_on(byte led)
{
     digitalWrite(led,HIGH);
}
void led_off(byte led)
{
     digitalWrite(led,LOW);
}
