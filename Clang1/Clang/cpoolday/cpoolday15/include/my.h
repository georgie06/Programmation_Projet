/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** 
*/

typedef struct linked_list {
    void* data;
    struct linked_list *next;
}linked_list_t;
#ifndef MY_H_
    #define MY_H_

int convert(char *str);
int divsn(int x, int y);
int mod(int x, int y);
int multi(int x, int y);
int do_op(int x,int y, char const *str);
char *str_dont_want(char const *str);
int my_atoi2(char const *str);
char * dispatch(char const *str);
char * dispatch2(char const *str);
char *test2(char const *str);
char *add2(char const *s1, char const *s2);
long long int my_atoi(char const *str);
char *my_itoa(long long int n);
char *add3(long long int x,long long int y,int len);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);

#endif
