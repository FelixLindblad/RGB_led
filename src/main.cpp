#include <Arduino.h>

int red_led = 11;
int blue_led = 10;
int green_led = 9;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(green_led, OUTPUT);


}



void loop() {
  digitalWrite(red_led, HIGH);
  delay(1);
  digitalWrite(red_led, LOW);
  digitalWrite(blue_led, HIGH);
  delay(1);
  digitalWrite(blue_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(1);
  digitalWrite(green_led, LOW);
}

// int red_light_pin= 11;
// int green_light_pin = 10;
// int blue_light_pin = 9;
// void setup() {
//   pinMode(red_light_pin, OUTPUT);
//   pinMode(green_light_pin, OUTPUT);
//   pinMode(blue_light_pin, OUTPUT);
// }
// void loop() {
//   RGB_color(255, 0, 0); // Red
//   delay(1000);
//   RGB_color(0, 255, 0); // Green
//   delay(1000);
//   RGB_color(0, 0, 255); // Blue
//   delay(1000);
//   RGB_color(255, 255, 125); // Raspberry
//   delay(1000);
//   RGB_color(0, 255, 255); // Cyan
//   delay(1000);
//   RGB_color(255, 0, 255); // Magenta
//   delay(1000);
//   RGB_color(255, 255, 0); // Yellow
//   delay(1000);
//   RGB_color(255, 255, 255); // White
//   delay(1000);
// }
// void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
//  {
//   analogWrite(red_light_pin, 255-red_light_value);
//   analogWrite(green_light_pin, 255-green_light_value);
//   analogWrite(blue_light_pin, 255-blue_light_value);
// }