#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char * argv[]){

  char str[] = "aaaa bbbb cccc dddd";
  //string token

  char* piece = strtok(str, " ");

  while(piece != NULL) {
    printf("%s\n", piece);
    piece = strtok(NULL, " ");
  }

  return 0;
}
