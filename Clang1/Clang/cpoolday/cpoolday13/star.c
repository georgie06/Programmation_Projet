/*
** EPITECH PROJECT, 2021
** epitech star
** File description:
** star
*/
void star_1(unsigned int size);
void star_2(unsigned int size);
void star_5(unsigned int size);

void star(unsigned int size)
{
    if (size == 1)
        star_1(size);
    if (size == 2)
        star_2(size);
    if (size == 5)
        star_5(size);
}
void star_1 (unsigned int size)
{
        my_putstr("   ");
        my_putstr("*");
        my_putstr("\n");
        my_putstr("***");
        my_putstr(" ");
        my_putstr("***\n");
        my_putstr(" ");
        my_putstr("*   *\n");
        my_putstr("*** ***\n");
        my_putstr("   *   \n");
}

void star_2(unsigned int size)
{
         my_putstr("     *\n");
         my_putstr("    * *\n");
         my_putstr("***** *****\n");
         my_putstr(" *       *\n");
         my_putstr("  *     *\n");
         my_putstr(" *       *\n");
         my_putstr("***** *****\n");
         my_putstr("    * *\n");
         my_putstr("     *\n");
}

void star_5(unsigned int size)
{
    my_putstr("              *    \n");
    my_putstr("             * *\n");
    my_putstr("            *   *\n");
    my_putstr("           *     *\n");
    my_putstr("          *       *\n");
    my_putstr("***********       ***********\n");
    my_putstr(" *                         *\n");
    my_putstr("  *                       *\n");
    my_putstr("   *                     *\n");
    my_putstr("    *                   *\n");
    my_putstr("     *                 *\n");
    my_putstr("    *                   *\n");
    my_putstr("   *                     *\n");
    my_putstr("  *                       *\n");
    my_putstr(" *                         *\n");
    my_putstr("*                           *\n");
    my_putstr("***********       ***********\n");
    my_putstr("          *       *\n");
    my_putstr("           *     *\n");
    my_putstr("            *   *\n");
    my_putstr("             * *\n");
    my_putstr("              *\n");
}
