#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int getWords(char *str,char**tmp)
{
    int n=0,i,j=0;
    while(1){
		if (str[i] != ' ' ){//&& str[i+1] != 'c'){
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
	
}
int getWords2(char **str,char**tmp)
{
    int n=0,i,j=0;
    while(1){
		if (*str[i] != ' ' ){//&& str[i+1] != 'c'){
            tmp[n][j++]=*str[i];
            }
        else{
            tmp[n][j++]='\0';//insert NULL
			n++;
			j=0;
		}
        i++;
		if(*str[i]=='\0')
         break;
    }
    return n;
	
}

void print_arg ( char ** arg )
{
    char **str =
    getWords2(str,arg);
    arg ++;
}
int main() {
    char **tmp = "/bin/sh ls -a";
    print_arg(tmp);
}