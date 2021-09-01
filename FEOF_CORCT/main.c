#include <stdio.h>
#include <stdlib.h>

#define MYFILE "junk1.txt"

int main(void)
{
  FILE *fp;
  char buf[BUFSIZ] = "Garbage";
  int i;

  if ((fp = fopen(MYFILE, "r")) == NULL)
  {
    perror (MYFILE);
    return (EXIT_FAILURE);
  }

  i = 0;

  while (fgets(buf, sizeof(buf), fp) != NULL)
  {
    printf ("Line %4d: %s", i, buf);
    i++;
  }

  fclose(fp);

  return(0);
}
