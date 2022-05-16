#include <Trigo.h>

void setup()
{
  Serial.begin(9600);

  Serial.print("Sin 15: ");
  Serial.println(((float)SIN(15) / DEC4));
  Serial.print("Cos 15: ");
  Serial.println(((float)COS(15) / DEC4));
  Serial.print("aCos 0,8660: ");
  Serial.print(((float)aCOS(8660) * 180 / 31416));
  Serial.println(" degree");
  Serial.print("aTan 5/3: ");
  Serial.print(((float)aTAN2(5, 3) * 180 / 31416));
  Serial.println(" degree");
}

void loop()
{
}