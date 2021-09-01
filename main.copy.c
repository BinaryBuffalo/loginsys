#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defining File name
#define MYFILE "logins.txt"

int main(int argc, char* argv[]){
  //file pointer
  FILE *fp;
  char set1[10];
  char usrnm[25], passwd[25];
// buffer for reading LINE
  char buf[BUFSIZ]="US&PS_DB";
  int i;
  int opp1;
if ((fp = fopen(MYFILE, "r")) == NULL){
  perror("[x] Failed Reading .txt \n");
  return (EXIT_FAILURE);
}
printf("[+] What is your Username :> ");
scanf("%s", &set1);

//scanning for username & password
i=0;
while (fgets(buf, sizeof(buf), fp) != NULL)
{
  strtok(buf, ";");
  printf("%s\n", buf);
  i++;
  if(strcmp(buf, set1) == 0){
    printf("MATCH FOUND\n");
    strcpy(usrnm, set1);
    opp1=11;
  }
}
fclose(fp);

if(opp1==11){
printf("Profile\nNICKNAME: %s\n", usrnm);
}
else{
printf("Failed to login\n");
}


  return 0;
}
