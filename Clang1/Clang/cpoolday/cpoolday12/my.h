/*
** EPITECH PROJECT, 2021
** Include
** File description:
** Include all library
*/

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
int is_neg(char const *str, int count);
int my_print_alpha(void);
int str_is_not_alphanum(char const *str, int count);
int nbr_word(char const *str);
int len_word(char const *str, int nbr);
int not_alphanum_del(char const *str, int count);
int **my_str_to_word_array(char const *str);
int str_is_not_alphanum(char const *str, int count);

#endif
