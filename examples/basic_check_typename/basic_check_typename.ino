/*
   TridentTD_TypeName library
   คือ ไลบรารี่ สำหรับ เช็คตัวแปร หรือ object นั้นๆ
   เป็นประเภทใด ด้วยคำสั่ง สั้นๆ เพียง DECT_TYPENAME(var)
*/

#include <TridentTD_TypeName.hpp>

void setup() {
  Serial.begin(115200); //Serial.println();

  int            a = 13242;
  const int      b = 2324;
  int*           c = &a;
  float          d = 232.534;
  float&         e = d;
  String       str = "Hello World";
  const char *ssid = "MySSID";
  char      name[] = "TridentTD";
  uint8_t        n = 23;
  uint16_t       s = 23242;
  sint32_t       l = 234422132;
  sint64_t      ll = 234322345324;
  time_t      time = 23242321;
  size_t      size = 634;
  bool        BOOL = true;
  byte        Byte = 142;
  word        Word = 242232; 

  Serial.println( DECL_TYPENAME(a));
  Serial.println( DECL_TYPENAME(b));
  Serial.println( DECL_TYPENAME(c));
  Serial.println( DECL_TYPENAME(d));
  Serial.println( DECL_TYPENAME(e));
  Serial.println( DECL_TYPENAME(str));
  Serial.println( DECL_TYPENAME(ssid));
  Serial.println( DECL_TYPENAME(name));
  Serial.println( DECL_TYPENAME(n));
  Serial.println( DECL_TYPENAME(s));
  Serial.println( DECL_TYPENAME(l));
  Serial.println( DECL_TYPENAME(ll));
  Serial.println( DECL_TYPENAME(time));
  Serial.println( DECL_TYPENAME(size));
  Serial.println( DECL_TYPENAME(BOOL));
  Serial.println( DECL_TYPENAME(Byte));
  Serial.println( DECL_TYPENAME(Word));
}

void loop() {
  delay(1);
}