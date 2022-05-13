#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <ncurses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void count_cols(char *filename) {
    int i = 0;
    int *tmp = malloc(sizeof(int)*strlen(filename));
    while(filename[i] != '\0') {
        for(j = 0; filename[j] != '\n';j++) {
            tmp[i] = j;
        }
    }
    for(i = 1; i < nbr; ++i)
    {
       if(tab[0] < tab[i])
           tab[0] = tab[i];
    }
    printf("%i",tmp[0]);
}
int main(int ac,char **av) {
    char *str = av[1];
    count_cols(str);
}