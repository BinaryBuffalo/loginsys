#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

  char input[BUFSIZ] = "Devil Stalin";
  //extract the first token
  char * token = strtok(input, " ");
  printf("%s %s\n", token, token );
  return 0;
}
