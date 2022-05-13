
#include <stdio.h>
#include <stdlib.h>
#include<stdarg.h>

char *conversion(unsigned int num, int base)
{
    static char Representation[]= "0123456789ABCDEF";
    static char buffer[50];
    char *ptr;

    ptr = &buffer[49];
    *ptr = '\0';
    do {
        *--ptr = Representation[num%base];
        num /= base;
    } while(num != 0);
    return(ptr);
}

int scan (char * str, ...)
{
  va_list vl;
  int i = 0, j=0, ret = 0;
  char buff[100] = {0}, tmp[20], c;
  char *out_loc;
  while(c != '\n') {
    if (fread(&c, 1, 1, stdin)) {
      buff[i] = c;
      i++;
    }
  }
  va_start( vl, str );
  i = 0;
  while (str && str[i]) {
    if (str[i] == '%') {
      i++;
    switch (str[i]) {
        case 'c': {
          * (char *)va_arg( vl, char* ) = buff[j];
          j++;
          ret ++;
          break;
        }
        case 'd': {
          * (int *)va_arg( vl, int* ) = \
          strtol(&buff[j], &out_loc, 10);
          j += out_loc -&buff[j];
          ret++;
          break;
        }
        case 'x': {
          * (int *)va_arg( vl, int* ) = \
          strtol(&buff[j], &out_loc, 16);
          j += out_loc -&buff[j];
          ret++;
          break;
        }
        case 'o': {
          * (int *)va_arg( vl, int* ) = \
          strtol(&buff[j], &out_loc, 8);
          j += out_loc -&buff[j];
          ret++;
          break;
        }
        case 's': {
          out_loc = (char *)va_arg( vl, char* );
          strcpy(out_loc, &buff[j]);
          j += strlen(&buff[j]);
          ret++;
          break;
        }
      }
    } else {
      buff[j] =str[i];
      j++;
    }
    i++;
  }
  va_end(vl);
   return ret;
}