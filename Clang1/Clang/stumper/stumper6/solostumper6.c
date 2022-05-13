/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** solostumper6
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int myatoi(char str) 
{
	int res = 0;
	res = str  - '0';
	return res;
}
int count_vig(char *str) 
{
	int i = 0;
	int count = 0;
	for(;str[i] != '\0';i++)
		if(str[i] == ',')
			count++;
	return count;
}

	
int *my_stock(char *str)
{
	int res = 0;
	int len = strlen(str);//-(len/2+1);//cge
	int *tab = malloc(sizeof(int)*len);
	int j = 1;
//	printf("%i\n",len);
	int vig = count_vig(str);
	int tmp[len-vig];
	tab[0] = myatoi(str[0]);


    for (int i = 1; str[i] != '\0'; i++,j++) {
		if(str[i] == ',') {
		i++;
		tab[j] = myatoi(str[i]);
//		printf("%i",tab[j]);
		}
	}
//	printf("vig = %i\n",count_vig(str));
//	int vig = count_vig(str);
	for(int i = 0 ; i < len-vig; i++) {
		tmp[i] = tab[i];
//		printf("%i",tmp[i]);
	}
	

    return tmp;

}

/*char *convert_char_to_int(char *str) {
	
int count_hole(int * hole_value) {
	int len = 10;
	int i = 0;
	for(;hole_value[i] != len; i++);
	return i;
}
		
void solostumper6(int* hole_value,int* nb_stroke) {
	








}
*/



int main (void) 
{
	//char str[1000];
	char *str = "3,2,1";
        char *tmp = "5,3,5";
	int len = (strlen(str) - count_vig(str));
	int *array1 = malloc(sizeof(int)*len);
	int *array2 = malloc(sizeof(int)*len);
	//char *str = "3,2,1,4,5,6,8,4,5";
	//char *tmp = "5,3,5,7,4,4,3,3,6";
	array1 = my_stock(str);
	 printf("%i\n",array1[0]);
	array2 = my_stock(tmp);
	printf("%i\n",array1[0]);
	printf("%d:==",array2[0]-array1[0]);
//	for(int i = 0; i != len;i++)
//		printf("%i:%i\n",i,array1[i]);

	int result;
	for(int i = 0; i != len;i++) {
		int a = array1[0];
		int b = array2[0];
		result = b - a;			
		printf("result = %i",result);
/*		if(array2[i]-array1[i] == 3)
			printf("triple bogey\n");
		if(array2[i]-array1[i] == 2)
                        printf(" double bogey\n");
		if(array2[i]-array1[i] == 1)
                        printf("bogey\n");
		if(array2[i]-array1[i] == 0)
                        printf("Par\n");
		if(array2[i]-array1[i] == -1)
                        printf("birdies\n");
		if(array2[i]-array1[i] == -2)
                        printf("eagle\n");
		if(array2[i]-array1[i] == -3)
                        printf("albatros\n");
		if(array2[i]-array1[i] == 3)
                        printf("Condor\n");
		else {
			int nb = array2[i]-array1[i];
                        printf("%i\n",nb);
		}	
  //             printf("Hole %i (Par %i)\n",i,array1[i]);
*/	}
	return 0;

}
