#include "LCD12864RSPI.h"
#define AR_SIZE(a) sizeof(a) / sizeof(a[0])

unsigned char show1[]="TONYLABS";

LCD12864RSPI LCDA(13, 10, 11);

void setup()
{
}
 
void loop()
{
  LCDA.clear();//@Clear Screen
  delay(100);
  LCDA.displayString(0,0,show1,AR_SIZE(show1));
  delay(5000);
  LCDA.clear();//@Clear Screen
  delay(100);
}
