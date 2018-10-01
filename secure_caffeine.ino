#include <Mouse.h>
#define DELAY 1

int r;
float theta;

void setup() {
  Mouse.begin();
  randomSeed(analogRead(0));
  r = random(10, 20);
  theta = 0;
}

void loop() {
  theta = move_mouse(theta);
  delay(DELAY);
}

float move_mouse(float theta) {
    theta = theta - 0.1;
    int move_x = r * cos(theta);
    int move_y = r * sin(theta);
    Mouse.move(move_x, move_y, 0);
}
