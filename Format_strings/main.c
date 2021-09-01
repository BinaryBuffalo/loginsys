#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Point  {
  int x, y;
} Point;

int main(int argc, char* argv[]){
  Point p = {
      .x = 10,
      .y = 25
    };
    char buff[100];
    snprintf(buff, 100, "%d %d\n", p.x, p.y);
    printf("%s", buff);

  return 0;
}
