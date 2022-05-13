/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** strcmp
*/
int my_strlen(char const *str);
int compare_strlen(char const *s1, char const *s2);

int my_strcmp(char const *s1, char const *s2)
{
    int c1 = 0;
    int c2 = 0;
    char x;
    char y;
    int len = compare_strlen(s1,s2);
    for(;*s1 != len && *s2!= len;s1++,s2++) {
        if (*s1 != *s2) {
        x = *s1;
        y = *s2;
        c1 = (int)x;
        c2 = (int)y;
        return c1-c2;
        }
    }
    return 0;
}

int compare_strlen(char const *s1,char const *s2)
{
    int l1 = my_strlen(s1);
    int l2 = my_strlen(s2);
    if (l1 > l2)
        return l1;
    if (l1 < l2)
        return l2;
    if (l1 == l2)
        return 0;
}
                
