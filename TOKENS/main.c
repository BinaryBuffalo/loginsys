#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){

  char input[BUFSIZ] = "rey, Luke, Leia: Anakin, Padme";
  int i=0;

  char *token = strtok(input, "-");
  printf("%d:[%p] --- %s\n", i, token, token);

  return 0;
}
