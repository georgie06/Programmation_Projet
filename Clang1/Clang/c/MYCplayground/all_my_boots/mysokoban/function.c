/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int getWords(char *str,char**tmp)
{
    int n=0,i = 0,j=0;

    while(1){
        if (str[i] != '\n' ){
            tmp[n][j++]=str[i];
            }
    
        else{
		tmp[n][j]='\0';//insert NULL
		n++;
		j=0;
		}
        i++;
		if(str[i]=='\0')
         break;
    } 
    return n;
	
}	
char **mymalloc2d(int ligne,int colonne)
{
    int count = 0;
    char ** tab = malloc(ligne * sizeof(*tab));
    while (count <= ligne)
    tab[count++] = malloc(colonne * sizeof(tab));
    return tab;
}
char changercarac( char caractereachanger, char caractereremplacer)
{
    caractereachanger = caractereremplacer;
 //   printf("chge=%c",caractereachanger);
    return caractereachanger;
}
void myswap(char *buff,int x, int y) { 
    char temp;
    temp = buff[x];
    buff[x] = buff[y];
    buff[y] = temp;
   // printf("x=%c",buff[x]);
    //printf("y=%c\n",buff[y]);

}
void remplace(char a) {
    char b = ' ';
    char tmp = a;
    a = b;
    b = tmp;

}
/*int main (int ac,char **av) {
    char buff[10000];
  
    int size = sizeof(buff)+1;//pour l'output me rajoute des caractere
 
    int fd1 = open(av[1],O_RDWR);
    int fd2 = read(fd1,buff,size);
    printf("read=%i",fd2);
    printf("open=%i\n",fd1);
    char stock;
    int count = 0;
    for(int i = 0; buff[i] != '\0';i++) {
            if (buff[i] == 'P' && buff[i+1] == 'X' && count != 1) {
               // printf("succes\n");
               // changercarac(buff,buff[i+1],'P');
                myswap(buff,i+1,i+2);
               // printf("buff[i]=%c  ",buff[i]);
                //printf("buff[i+1]=%c    ",buff[i+1]);
                changercarac(buff[i+1],'P');
               // count++;
             //  printf("buff[i]=%c  ",buff[i]);
             buff[i+1] = 'P';
             buff[i] = ' ';
             printf("buff[i+1]=%c    \n",buff[i+1]);
             //   printf("buff[i+2]=%c    \n",buff[i+2]);
                //changercarac(buff,buff[i],'P');
                //myswap(buff,i,i+1);
                count++;
                refresh();
                //i++;
              //  changercarac(buff,buff[i],' ');
              //  changercarac(buff,buff[i],' ');
                 //   if(buff[i+1] == 'P')
                  //  changercarac(buff,buff[i+2],'X');
                //buff[i] = ' ';
               // buff[i+1] = 'P';
               // buff[i+2] = 'X';
                //buff[i+2] = 'X';
            }
        }
printf("%s",buff);
return 0;
}*/