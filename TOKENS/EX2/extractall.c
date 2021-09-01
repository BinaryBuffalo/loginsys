#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){

  char input[BUFSIZ] = "STALIN! The young god is here";
//always need to extract the first token :)
  char * token = strtok(input, " ");
//Loop through the String
    while( token != NULL){
      printf(" %s \n", token);
      token = strtok(NULL, " ");
    }



  return 0;
}
