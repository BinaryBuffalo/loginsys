#include <stdio.h>
#include <stdlib.h>



int main(int argc, char* argv[]){

// username password || 10=>user 20=>admin
  char str[] = "Stalin moowoo 20";
  char str2[] = "Stalin;moowoo;10";
  char username[20] = { 0 };
  char password[20] = { 0 };
  char username2[20] = { 0 };
  char password2[20] = { 0 };
  unsigned int prvs;
  unsigned int prvs2;

  sscanf(str, "%s %s %d", username, password, &prvs);
  sscanf(str2, "%[^;];%[^;];%d", username2, password2, &prvs2);

  printf(" USERNAME: %s \n PASSWORD: %s \n prvs: %d\n", username, password, prvs);
  printf(" USERNAME: %s \n PASSWORD: %s \n prvs: %d\n", username2, password2, prvs2);


  return 0;
}
