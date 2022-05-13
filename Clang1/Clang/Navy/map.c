/*
** EPITECH PROJECT, 2020
** map.c
** File description:
** map
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>

static int flag = 0;
static int err = 0;
void init_navy(char **tmp, map *pos, int recv, int x)
{
    int i = 0;

   while ( i < 9) {
        for (int j = 0; j < 10; j++)
            if (j >= pos[get].a && i >= pos[get].n && j <= pos[get + 1].a && i <= pos[get + 1].n) {
                tmp[i][j] = x;
                if (i == pos[get + 1].n && j == pos[get + 1].a) {
                get = get + 2;
                x++;
                }
            }
        }
        i++;
    }
    if (!get == 8)
        init_navy(str, pos, get, x);
}
void print_start(char **navy,char *ennem) {
    int i = 0;
    int j = 0;
    while(i < 1) {
        for(;j < 9;j++)
        if (j == 1) {
            navy[i][j] = '+';
            ennem[i][j]= '+';
        }
        i++;
    }
    printf("my_position: \n");
    printf(" |  ABCDEFGH\n");
    for(i = 0; i < 9; i++)
    {
        printf("%s\n",navy[i]);
    }
    printf("\nenemy’s positions:\n");
    printf(" |ABCDEFGH\n");
        for (int i = 0; i < 9; i++) {
            printf("%s\n", enemy[i]);
            }
}
void signal(int sig, siginfo_t *info, void *context)
{
    usleep(40000);
    flag = flag+1;
    err = err+1;
    /*my_printf*/
    printf("\ennemy connected\n");
    kill(info->si.pid,SIGUSR2);
}

void scnd_connect(int sig) {
    err++;
  /* my_printd*/
  printf("Successfully connected\n");

}

int communicate(char **av) {
    pid_t pid = getpid();
    struct sigaction one;
    if (pid < 0 )  
    return 84;
    if (pid == 0)
    return 0;
    else {
        one.sa_flags = SA_SIGINFO;
        one.sa_sigaction = &signal;
        sigaction(SIGUSR2, &one, NULL);
        printf("my_pid: %i\n", pid);
        while (1) {
            if (flag == 0)
                my_printf("waiting for enemy connection...\n");
            else {
                map_navy(av[1]);
            }
            usleep(10000000);//60000000
        }
        return 0;
    }
}

int scnd_user(char **av)
{
    pid_t pid = getpid();
    int procces = my_get_nbr(av[1]);
    struct sigaction one;
    one.sa_handler = &scnd_connected;

    kill(procces, SIGUSR2);
    sigaction(SIGUSR2, &one, NULL);
    my_printf("my_pid: %i", pid);
    usleep(600000);//500000
    while (1) {
            if (error == 0) {
                printf("connection failure\n");//myprintf
                return 84;
                break;
                } 
                else {
                map_navy(av[2]);
            }
            usleep(60000000);
        }
    return 0;
}