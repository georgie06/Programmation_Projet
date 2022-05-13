#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int compare(char *str,char const*to_find)
{
    int len = strlen(to_find);
    while ( str != NULL & to_find != NULL) {
        if (*str == *to_find) {
            return 0;
            }
            str++;
            to_find++;
        }
        return (*to_find == '\0');
}

char *my_strstr(char *str, char const *to_find)
{

    while (*str!= '\0'){
        if (*str == *to_find && compare(str,to_find)){
            write(1,"1",1);
        }
    str++;
    }
    write(1,"0",1);
    return NULL;
}
int main (int ac, char ** av) {
    int j = 0;
    int i = 0;
    char *str = malloc(sizeof(char)*ac);
    strcpy(str,av[2]);
    char *tmp = malloc(sizeof(char)*strlen(av[1])); 
    strcpy(tmp,av[1]);
    my_strstr(str,tmp);
    return 0;
}