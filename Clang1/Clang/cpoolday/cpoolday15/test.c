/*
** EPITECH PROJECT, 2021
** epitech test
** File description:
** testr
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define itc(x) (x - '0')
#define cti(x) (x + '0')
#include "include/my.h"
#include <string.h>
char *infin_add(char const *str1, char const *str2);
long long int my_atoi(char const *str)
{
    long long int res = 0;
    long long int i = 0;

    for (; str[i] != '\0' ; i++) {
        res = res * 10 + str[i] - '0';
    }
    return res;
}

int my_atoi2(char const *str)
{
    long long int res = 0;
    long long int i = 0;

    for (; str[i] != '\0' ; i++) {
        res = res * 10 + str[i] - '0';
    }
    return res;
}
char *add2(char const*str1,char const *str2)
{
    long long int res = 0;
    long long int len = my_strlen(str1) + my_strlen(str2);
    char *result = NULL;

    result = malloc (len - 1 * sizeof(char));
    res = my_atoi2(str1) + my_atoi2(str2);
    result = my_itoa(res);
    return result;
}

char *test2(char const *str) {
    int i = 0;
    int len = my_strlen(str);
    char *tmp = malloc(len*sizeof(char));
    for (;str[i] != ')';i++) {
        //str[i] = str[i+1];                                                                                                                                                      
        tmp[i] = str[i];
//        tmp[i] = tmp[i+1];                                                                                                                                                      
    }
    //printf("%s",tmp);                                                                                                                                                           
    return tmp;
}



char *str_dont_want(char const *str)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(str)-1;
    char *tmp = malloc(len*sizeof(char));
    //char Word[] = "abcdef";                                                                                                                                                     
    //char Word2[10];                                                                                                                                                             
    //char *tmp2 = malloc(len*sizeof(char));                                                                                                                                      

    strcpy(tmp,&str[0]);
    //  printf("%s",tmp2);                                                                                                                                                        
    return tmp;
}
/*int my_strlen2( char const *str)                                                                                                                                                
{                                                                                                                                                                                 
    int i = 0;                                                                                                                                                                    
    for(;str[i] != '\0';i++) {                                                                                                                                                    
        while (str[i]                                                                                                                                                             
*/
char * dispatch(char const *str)
{
    int i = 0;
    char *tmp1 = malloc(sizeof(char)*2);
    char *tmp2 = malloc(sizeof(char)*2);
    printf("   \n%s\n",strncpy(tmp1,&str[1],1));
    printf("%s\n",strncpy(tmp2,&str[3],2));
    char *tmp3 = malloc(my_strlen(str)*sizeof(char));
//    int x = my_atoi2(tmp1)+my_atoi2(tmp2);                                                                                                                                      
    strcpy(tmp3,add2(tmp1,tmp2));
    return tmp3;
}
char * dispatch2(char const *str)
{
    int i = 0;
    char *tmp1 = malloc(sizeof(char)*2);
    char *tmp2 = malloc(sizeof(char)*2);
    printf("   \n%s\n",strncpy(tmp1,&str[1],1));
    printf("%s\n",strncpy(tmp2,&str[3],2));
    char *tmp3 = malloc(my_strlen(str)*sizeof(char));
//    int x = my_atoi2(tmp1)+my_atoi2(tmp2);                                                                                                                                     \
                                                                                                                                                                                  
    strcpy(tmp3,infin_add(tmp1,tmp2));
    return tmp3;
}


char *infin_add(char const *str1, char const *str2)
{
    char *result = NULL;
    long long int res = 0;
    long long int n = my_strlen(str1);
    long long int m = my_strlen(str2);
    long long int len = n + m;
    long long int  x = my_atoi(str1);
    long long int y = my_atoi(str2);

    if ( n >= 2 || m >= 2) {
        result = malloc(len - 1 * sizeof(char));
        result = add2(str1, str2);
        puts(result);
        return result;
    }
    else {
        result = malloc(2 * sizeof(char));
        res = *str1 - '0' + *str2 - '0';
        result = my_itoa(res);
        puts(result);
        return result;
    }
}

char *add3(long long int x, long long int y, int len)
{
    long long int res = 0;
    char *result = NULL;

    result = malloc (len - 1 * sizeof(char));
    res = x + y;
    result = my_itoa(res);
    return result;
}

int main(int ac , char **av)
{
    char const *str = av[1];
    int len = my_strlen(str);
    char *tmp = malloc(sizeof(char)*len);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            tmp = test2(str);
            printf("%s",dispatch(str_dont_want(tmp)));
        }
        else {
            printf("%s",dispatch2(tmp));
        }
    }
    return 0;
}

