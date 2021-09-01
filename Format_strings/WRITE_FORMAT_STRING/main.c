#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int var1 = 10;
  double var2 = 2.26;
  char buff_string[100];

    snprintf(buff_string, 100,"Value of var1 = %d Value of var2 = %lf\n", var1, var2);

    printf("%s", buff_string);
  return 0;
}
