#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int main() {
   char cwd[PATH_MAX];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   } else {
       perror("getcwd() error");
       return 1;
   }
   return 0;
}
/*int getWords(char *str, char tmp[100][200])
{
    int n=0,i,j=0;
    while(1){
		if(str[i] != '.' ){//&& str[i+1] != 'c'){
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
   // for(i=0;i<=n;i++)
	//	write(1,tmp[i],strlen(tmp[i]));
    return n;
	
}

int  main()
{
	int n = 0; //number of words
	int i = 0; //loop counter 
    struct dirent *sd;
    DIR *fold = opendir("./");
    printf('a');
    char *str = malloc(sizeof(char)*strlen(sd->d_name));
    printf('b');
   // char  **tmp = malloc(sizeof(char*)*10);
    while (sd = readdir(fold)) {
        printf("%lu",sizeof(sd->d_name));
       
        if (sd->d_name[0] != '.') {
            //strcpy(str,sd->d_name);
           // printf("%s",str);
            //strcat(sd->d_name,' ');
           // getWords(tmp,str);
            puts(sd->d_name);
            //write(1,sd->d_name,strlen(sd->d_name));
            }
        }
       // char arr[100][200];
	 //   n = getWords(sd->d_name,arr);
      //  for(i=0;i<=n;i++)
	//	write(1,arr[i],strlen(arr[i]));
        //write(1,' ',1);
    closedir(fold);
    return 0;
}*/


/*int strlenc(char const *str,int i)
{
    //char tmp = malloc(sizeof(char )*strlen(str));
    while (str[i] != '.') {
     //   while(str[i] != '.'
        i++;
    }
    i = i+2;
    return (i);
}*/
/*int count_c(char *str) {
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] == '.') {
            j++;

        }
        i++;
    }
    return j;
}*/
/*void stock_str(char *str) {
    int j = 0;
    int i = 0;
    int len = strlenc(str,i);
    int num = count_c(str);
    int k = 0;
    char **arr = malloc(sizeof(char*)*num);
    char *tmp = malloc(sizeof(char)*len);
    for(int k = 0; k < num; k++) {
        while ( i != strlenc(str,i)) {
            tmp[j] = str[i];
            i++;
            j++;
        }
        tmp[len+1] = ' ';
        tmp[len+2] = '\0';
        printf("%s",tmp);
        arr[k] = tmp;
        puts('\n');
        }
    i++;
    for (int i = 0; i < num; ++i) {
        printf("%s ,", arr[i]);
        }
    }
*/
/*int test_str(char *str, int i) {
    int num = count_c(str);
    char **arr = malloc(sizeof(char*)*num);
    int j = 0;

    for(; j < num; j++) {
        for(;i != count_c(str);i++){
            arr[j] = stock_str(str,i);
        }
    }
}*/
/*char * my_ls()
{
    struct dirent *sd;
    DIR *fold = opendir("./");
    char  *str = malloc(sizeof(char)*strlen(sd->d_name));
   // char  **tmp = malloc(sizeof(char*)*10);
    while (sd = readdir(fold)) {
        //printf("%lu",sizeof sd->d_name);
       
        if (sd->d_name[0] != '.') {
            strcpy(str,sd->d_name);
            //strcat(sd->d_name,' ');
           // getWords(tmp,str);
           // puts(sd->d_name);
         //  write(1,sd->d_name,strlen(sd->d_name));
            }
        }
        //puts(" ");
       // return str;
    closedir(fold);
}*/
/*int main () {
    //printf("$> ./my_ls .\ndir my_ls ");
    int i;
    char arr[100][200];
	
	int n=getWords(my_ls(),arr);
	
	for(i=0;i<=n;i++)
		write(1,arr[0],strlen(arr[i]));


*/
