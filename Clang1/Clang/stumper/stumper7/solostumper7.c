/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** solostumper7
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}


char *solostumper6(char *str) 
{
	char *tmp = malloc(sizeof(char)*my_strlen(str)); 
	int i = 0;	
	for(; str[i] != '\0';i++) {
		while (str[i] != 32 && str[i] != 33 && str[i] != 34 &&str[i] != 35 &&str[i] != 36 &&str[i] != 37 && str[i] != 38 &&str[i] != 39 &&str[i] != 40 && str[i] != 41 
				&& str[i] != 42 &&str[i] != 43 &&str[i] != 44 && str[i] != 45 && str[i] != 46 && str[i] != 47 && str[i] != 58 && str[i] != 59 && str[i] != 60 && str[i] != 61 && str[i] != 62 && str[i] != 63 
				&& str[i] != 64 && str[i] != 91 && str[i] != 92 && str[i] != 93 && str[i] != 94 && str[i] != 95) {
				tmp[i] = str[i];
				
				i++;
			}
			tmp[i]= '_';
		}
	for(i = 0; tmp[i] != '\0'; i++) {
		if( tmp[i] >= 64 && tmp[i] < 91)
			tmp[i] = tmp[i] + 32;
	
	}
	for(i = 0; tmp[i] != '\0'; i++) {
		if( tmp[0] == '_')
			tmp[0] = ' ';
	}
	
	write(1,tmp,my_strlen(tmp));	
	return tmp;
}

int main (int ac, char **av) 
{
	solostumper6(av[1]);
	return 0;
}
