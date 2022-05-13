#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int getWords(char *str);
int my_ls()
{
	//int n = 0; //number of words
	//int i = 0; //loop counter 
    struct dirent *sd;
    DIR *fold = opendir("./");
  //  char *str = malloc(sizeof(char)*strlen(sd->d_name));
   // char  **tmp = malloc(sizeof(char*)*10);
    while (sd = readdir(fold)) {
        if (sd->d_name[0] != '.') {
            getWords(sd->d_name);
            //puts("\n");
            }
    }
    closedir(fold);

}
int getWords(char *str,char**tmp)
{
    int n=0,i,j=0;
    while(1){
		if (str[i] != '.' ){//&& str[i+1] != 'c'){
            tmp[n][j++]=str[i];
            }
        else{
            tmp[n][j++]='\0';//insert NULL
			n++;
			j=0;
		}
        i++;
		if(str[i]=='\0')
         break;
    }
    return n;
	
}*/

char ** my_malloc2d(int nombre_de_ligne,int nombre_de_colonne)
{
int count = 0;
char ** tab = malloc(nombre_de_ligne * sizeof(*tab)); /* malloc du nombre de ligne*/
while (count <= nombre_de_ligne)
  tab[count++] = malloc(nombre_de_colonne * sizeof(tab));
return tab;
}

/*int main()
{
    char str1[100];
    char newString[10][10]; 
    int i,j,ctr;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");    
 
    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;*/
int getWords(char *str) {

//char *str = "jesuis.clemeilleur.c";
char ** tmp = my_malloc2d(150,150);
//char *str = malloc(sizeof(char)*100);
int i,j,ctr;
j=0; ctr=0;
    for(i=0;i<=(strlen(str));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str[i-1]== '.' || str[i]=='\0')
        {
            
            tmp[ctr][j+1]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            //ctr = ctr - 1;
        
            tmp[ctr][j]=str[i];

            j++;
        }
        tmp[ctr][j] = ' ';
        tmp[ctr][strlen(str)] = NULL;
    }
    char *space = " ";
    for(i=0;i < ctr-3;i++) {
        int j = strlen(tmp[i]);
        tmp[i][j] = 'c';
        tmp[i][j+1] = '\0';
        }
    
    for(i=0;i < ctr-1;i++)
        write(1,tmp[i],strlen(tmp[i]));
    return 0;
}
int main() 
{
    my_ls();
    return 0;
}

