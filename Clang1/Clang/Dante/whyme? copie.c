#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
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
    if (tmp == NULL)
        return 84;
    
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
void read_map(char *map) 
{
    int count_one = 0;
    int i = 0, j=0;
    char *chaine = malloc(sizeof(char)*strlen(map)) ;
    int size = sizeof(map);
    int fd1 = open(map,O_RDWR);
    int fd2 = read(fd1, chaine, size);
    char **tmp2 = mymalloc2d(1000,1000);
    //tmp2[0][0] = "A";
    getWords(chaine,tmp2); 
    for(i = 0; tmp2[i] != NULL ;i++)
        printf("%s\n", tmp2[i]);
}


int main(int ac, char **av) 
{
    char *map = av[1];
    read_map(map);
}








/*void count_cols(char *filename) {
    
    char buff[10000];
    printf("1");
  
    int size = sizeof(buff)+1;
    int fd1 = open(filename,O_RDWR);
    int fd2 = read(fd1,buff,size);

    printf("read=%i",fd2);
    printf("open=%i\n",fd1);

    int i = 0;
    int *tmp = malloc(sizeof (int)* strlen(buff));
    
    printf("%s",buff);
    
    for(;buff[i] != '\0';i++){
        for(int j = 0; j != strlen(buff);j++) {
            if (buff[i] == '\n') {
            tmp[j] = i;
            printf("%i",i);
        }
    }
    //printf()
   /* for(i = 1; i < 1000; ++i)
    {
       if(tmp[0] < tmp[i])
           tmp[0] = tmp[i];
    }
    cols = tmp[0];
    printf("%i",cols);*/
}
int main(int ac,char **av) {
    char *str = malloc(sizeof(char)*strlen(av[1]));
    count_cols(str);
}