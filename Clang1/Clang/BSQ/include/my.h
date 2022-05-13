/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** 
*/
#ifndef MY_H_
    #define MY_H_
int my_printf(const char *format,...);
void init_navy(char **tmp, map *pos, int recv, int x);
void print_start(char **navy,char *ennem);
void signal(int sig, siginfo_t *info, void *context);
void scnd_connect(int sig);
int communicate(char **av);
int scnd_user(char **av)