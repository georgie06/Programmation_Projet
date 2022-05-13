#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_ls () {
    char **tab = NULL;
    int word =0;
    int line =0;
    int linesize = 0;
    while(1) {
        printf("$>");
        //linesize = getline(&buff,&line,stdin);
        //word = count_words(buff);
       // if (linesize == -1)
        ////return 81;
        //buff[linesize] = '\0';
        //if ()
        char * const ptr[]={"/bin/sh","-c","ls -a" ,NULL};
        execv("/bin/sh",ptr);

    }
    //char * const ptr[]={"/bin/sh","-c","ls -a" ,NULL};
    //execv("/bin/sh",ptr);
}

int main (int ac, char **av) {
my_ls();

return 0;
}
