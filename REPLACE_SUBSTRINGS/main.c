#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  char str[BUFSIZ] = "The apples are delicious.";
  printf("%s\n", str);
  string_replace(str, "apples", "hamburgers");
  printf("%s\n", str);
  return 0;
}
