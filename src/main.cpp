#include <Arduino.h>
// #include <stdio.h>
// #include <string.h>

struct Player
{
  String name;
  int score;
};

// test to see if sync'd with githup 4-26-23

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  struct Player player1;
  struct Player player2;
  
  player1.name = "Bry";
  player1.score = 10;

  player2.name = "James";
  player2.score = 4;

  Serial.print(player1.name);
  Serial.print("\t");
  Serial.println(player1.score);
  Serial.print(player2.name);
  Serial.print("\t");
  Serial.println(player2.score);
  
  delay(1000);
}

  // Serial.println(String("DayOfWeek:\t")+now.dayOfTheWeek());