/*
** EPITECH PROJECT, 2022
** generator map 
** File description:
** map dante 
*/

#include<stdio.h>
#include<stdlib.h>


void my_putchar(char c);
int my_putstr(char const *str);

void gene_map(char **argument)
{
    int x = atoi(argument[2]);
    int y = atoi(argument[1]);
    char **map = malloc(sizeof(char *) * (x + 1));
    
    map[x] = NULL;
    for (int c = 0; c < x; c++) {
        map[c] = malloc(sizeof(char) * (y + 1));
        for (int i = 0; i < y; i++)
            map[c][i] = 'X';
        map[c][y] = '\0';
    }
    for (int a = 0; map[a] != NULL; a++) {
        my_putstr(map[a]);
        my_putchar('\n');
    }
}

//je met une ligne sur une ligne que des etoiles (une ligne sur deux etoile pour tous les lambirynthe)  premeire forcement etoile toujour laisse etoile pour le chemin de facon aleatoire apres ligne ou que des x faut je printf une etoile minimun pour le chemin parametre perfecte qui lui devra donner un seul chemin 
