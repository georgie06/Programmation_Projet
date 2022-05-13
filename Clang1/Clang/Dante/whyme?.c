#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
#include <fcntl.h>

void count_cols(char *filename) {
    
    char buff[10000];
  
    int size = sizeof(buff)+1;
    int fd1 = open(filename,O_RDWR);
    int fd2 = read(fd1,buff,size);

    printf("read=%i",fd2);
    printf("open=%i\n",fd1);
}
   /* int i = 0;
    int *tmp = malloc(sizeof (int)* strlen(filename));
    while(*buff!= '\0') {
        for(int j = 0; buff[j] != '\n';j++) {
            tmp[i] = j;
        }
    }
    for(i = 1; i < 1000; ++i)
    {
       if(tmp[0] < tmp[i])
           tmp[0] = tmp[i];
    }
    cols = tmp[0];
    printf("%i",tmp[0]);
}*/
int main(int ac,char **av) {
    char *str = malloc(sizeof(char)*strlen(av[1]));
    count_cols(str);
}