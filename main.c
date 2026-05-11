// 基礎プログラミングII 第3回 Scrummyプロジェクト

#include <SchooMyUtilities.h>
SchooMyUtilities scmUtils = SchooMyUtilities();

int distance = 0;   // 距離センサー
int light = 0;      // 明るさセンサー
int led = 13;       // LED

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {

  distance = analogRead(A0);
  light = analogRead(A1);    

  if (distance > 700 && light < 300) {

    digitalWrite(led, HIGH);

  } else {

    digitalWrite(led, LOW); 

  }

}
