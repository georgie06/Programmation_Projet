#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int count_space(char *s) {
int count = 0;
int i = 0;
	for (i = 0;s[i] != '\0';i++)
    	{
        	if (s[i] == ' ')
            	count++;    
    	}
	return count+1;
}

int alpha(char i)
{
    if (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z' || i >= '0' && i <= '9')
        return 1;
    else
        return 0;
}

int word_count(char const *str)
{
    int i = 0;
    int count = 0;

    for(i = 0 ;str[i] != '\0';i++) {
        if (alpha(str[i]) == 1 && alpha(str[i + 1]) == 0) {
            count++;
        }
    }
    return count;
}

int strlen_word(char const *str, int i)
{
    int count = 0;

    for(i = 0;str[i] != '\0';i++) {
        if (alpha(str[i]) == 1){
            count++;
        }
        else {
            return count;
        }
        //i++;
    }
    return count;
}

char **my_str_to_word_array(char  *str, int i)
{
    int y = 0;
    int word = word_count(str);
    char **tab = malloc(sizeof(char *) * (word + 1));

    if (tab == NULL)
        return NULL;
    for (int j = 0; j < word; j++) {
        y = 0;
        tab[j] = malloc(sizeof(char) * (strlen_word(str, i) + 1));
        if (tab[j] == NULL)
            return NULL;
        for (; str[i] != '\0' && alpha(str[i]) == 1; i++) {
            tab[j][y] = str[i];
            y++;
        }
        tab[j][y] = '\0';
        i++;
    }

    tab[word] = NULL;
	for(int i=0;i<count_space(str);i++){
		for(int j=0;j<strlen(*tab);j++){
			printf("%s\t",*tab);
			}
			printf("\n");
			}
    return tab;
}

	

int main(int ac, char **av) {
	count_space(av[2]);
	my_str_to_word_array(av[2],ac);

	return 0;
}
