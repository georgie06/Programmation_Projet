/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** test
*/

#include "../include/my.h"
#include <criterion/criterion.h>

int add(char *s1, char *s2);
int sous(char *str, char *str2);
int multiplication(char *str, char *str2);
int my_division(char *str, char *str2);
int my_modulo(char *str, char *str2);

Test(sous, soustraction)
{
    cr_assert_eq(sous("4", "4"), 0);
}

Test(sous, soustraction2)
{
    cr_assert_eq(sous("14", "4"), 10);
}

Test(sous, soustraction3)
{
    cr_assert_eq(sous("2", "4"), -2);
}

Test(add, addition1)
{
    cr_assert_eq(add("4","4"), 8);
}

Test(add, addition2)
{
    cr_assert_eq(add("40000","40000"), 80000);
}

Test(multiplication, mult1)
{
    cr_assert_eq(multiplication("4","4"), 16);
}

Test(multiplication, mult2)
{
    cr_assert_eq(multiplication("400","4"), 1600);
}

Test(multiplication, mult3)
{
    cr_assert_eq(multiplication("40000000000000","123467"), 40000000123467);
}

Test(my_division, div1)
{
    cr_assert_eq(my_division("4","4"), 1);
}

Test(my_division, div2)
{
    cr_assert_eq(my_division("40","4"), 10);
}

Test(my_modulo, mod1)
{
    cr_assert_eq(my_modulo("4","2"), 0);
}

Test(my_modulo, mod2)
{
    cr_assert_eq(my_modulo("4","20"), 4);
}
