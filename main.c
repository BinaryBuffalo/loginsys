#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//defining File name
#define MYFILE "logins.txt"


void string_replace(char* source, char* substring, char* with){
  char* substring_source = strstr(source, substring);
  if(substring_source == NULL){
    return;
  }
//using mem(); because it doesn't look for a (NULL) \0 terminator
  memmove(
    substring_source + strlen(with),
    substring_source + strlen(substring),
    strlen(substring_source) - strlen(substring) + 1
  ); //buffer OVERFLOW: WARNING

  memcpy(substring_source, with, strlen(with));
}

int main(int argc, char* argv[]){
  //file pointer
  FILE *fp;
  char set1[10];
  char usrnm[25], passwd[25];
  int exline;
  char skiline[50];
  char block[25];
// buffer for reading LINE
  char buf[BUFSIZ]="US&PS_DB";
//  char qak[BUFSIZ]="sed -n !*p file.txt";
  int i;
  int opp1;

if ((fp = fopen(MYFILE, "r")) == NULL){
  perror("[x] Failed Reading .txt \n");
  return (EXIT_FAILURE);
}
printf("[+] What is your Username :> ");
scanf("%s", &set1);
i=0;
while (fgets(buf, sizeof(buf), fp) != NULL)
{
  strtok(buf, ";");
  printf("%s\n", buf);

  if(strcmp(buf, set1) == 0){
    printf("MATCH FOUND\n");
    strcpy(usrnm, set1);
    exline=i;
    exline=exline+1;
    opp1=11;
  }
  i++;
}
if(opp1==11){
snprintf(skiline, 50," sed -n %dp " MYFILE "\n", exline);
}

fclose(fp);

if(opp1==11){
printf("\n\nProfile\nNICKNAME: %s\n", usrnm);
printf("Password is on line %d\n", exline);
printf("SKI SKI: %s\n", skiline);
}

else{
printf("[x] Failed to login\n");
}
system(skiline);
printf("[+] Proccess exited succefully\n");
  return 0;
}
