
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {


      int i = 0;
      char buf[100];

      FILE *file = fopen(argv[1] , "r");
      fgets(buf, 100, file);

      for (i = 0; i < strlen(buf); i++)
          if (buf[i] >= 'A' && buf[i] <= 'Z')
              buf[i] = buf[i] ^ 0x20;


    printf(buf);

    fclose(file);
    return 0;
  }
