/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** main function
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>

#define LARGEUR 20      /* Largeur de la fenêtre */
#define HAUTEUR 10      /* Hauteur de la fenêtre */
#define POSX    20      /* Position horizontale de la fenêtre */
#define POSY    5       /* Position verticale de la fenêtre */
#define DELAY 30000
#define PLAYER 'P'
#define EMPTY ' '
#define LIMITE '#'
#define except 'X'

typedef struct  coord_s {
	int y;
	int x;
} coord_t;
void checkwin();
char *conversion(unsigned int num, int base);
int my_printf(const char *format,...);
void myswap(char *buff,int x, int y);
void remplace(char a);
int getWords(char *str,char**tmp);
char **mymalloc2d(int ligne,int colonne);
char changercarac( char caractereachanger, char caractereremplacer);

coord_t coord(int ac, char **av){
    coord_t map;
    char buff[1000];
    int i = 0;
    int j = 0;
    int count = 0;
    int size = sizeof(buff);
    int fd1 = open(av[1],O_RDWR);
    int fd2 = read(fd1,buff,size);
    char **tmp = mymalloc2d(1000,1000);

    getWords(buff,tmp);

    for(i = 0; i < 1000;i++)
        for(j = 0; j <1000;j++)
            if (tmp[i][j] == 'P' && count != 1) {
                count ++;
                map.y = i;
                map.x = j;
                }
    
    return map;
}
void checkwin()
{
    if ((COLS < POSX + LARGEUR) || (LINES < POSY + HAUTEUR)) {
      endwin() ;
      my_printf("Les dimensions du terminal sont insufisantes : l=%d,h=%d au lieu de l=%d,h=%d\n",COLS, LINES, POSX + LARGEUR, POSY + HAUTEUR);
      exit(EXIT_FAILURE) ;
    }
}
int is_move_okay(int y, int x)
{
    int testch ;
    testch = mvinch(y, x) ;
    return (testch == EMPTY || testch == except) ;
}
void read_map(char *tmp, FILE *fichier) 
{
    int count_one = 0;
    int i = 0;
    char chaine [10000] ;

    while (fgets(chaine,10000,fichier) != NULL) {
        for(; chaine[i] != '\0';i++) {
            if (chaine[i] == 'P' && chaine[i+1] == 'X' && count_one != 1) {
                myswap(chaine,i+1,i+2);
                changercarac(chaine[i+1],'P');
                chaine[i+1] = 'P';
                chaine[i] = ' ';
                count_one++;
            }
        }
        printw("%s", chaine) ;
        refresh() ;
    }
}

void cond_map(int ac,char **av) 
{
    if (av[1] == "-h") {
        my_printf("USAGE\n");
        my_printf("     ./my_sokoban map");
        my_printf("DESCRIPTION\n");
        my_printf("           map file representing the warehouse map, containing ‘#’ for walls,\n");
        my_printf("           ‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.\n");
        }
    if (ac != 2) {
        my_printf("Usage: %s <a c file name>\n", av[0]) ;
        exit(1) ;
    }

}
void made_mouv(int x,int y)
{
    int ch;
    
    do {
    mvaddch(y,x,PLAYER);
    //mvaddch(y,x,except);
    move(y,x) ;
    ch  = getch();
    refresh() ;
    switch (ch) {
        
        case KEY_BACKSPACE:
        case 'q' :
        case 'Q' :
        exit(84);
        break;
        
        case KEY_UP:
        case 'w':
	    case 'W':
            if ((y > 0) && is_move_okay(y - 1, x)) {
                mvaddch(y, x, EMPTY) ;
                y = y - 1 ;
                }
       break ;
       
    case KEY_DOWN:
       case 's':
       case 'S':
            if ((y < LINES - 1) && is_move_okay(y + 1, x)) {
                //mvaddch(y+1,x,except);
	            mvaddch(y, x, EMPTY) ;
                y = y + 1;
                }
                break ;

        case KEY_LEFT:
        case 'a':
        case 'A':
            if ((x > 0) && is_move_okay(y, x - 1)) {
                mvaddch(y, x, EMPTY) ;
                x = x - 1 ;
                }
                break ;
        case KEY_RIGHT:
        case 'd':
        case 'D':
            if ((x < COLS - 1) && is_move_okay(y, x + 1)) {
                mvaddch(y, x, EMPTY) ;
                x = x + 1 ;
                }
                break ;
                }
        } while (ch != 'q' || ch != 'Q' || ch != KEY_BACKSPACE) ;
    
}

void made_window(WINDOW *fenetre) {
    fenetre = newwin(HAUTEUR, LARGEUR, POSY, POSX) ;
    wbkgd(fenetre, COLOR_PAIR(2)) ;
    wrefresh(fenetre) ;
}

int main (int ac, char **av) 
{
    int x = 0;
    int y = 0;
    char *file = av[1] ;
    coord_t tmp;
    FILE* fichier = NULL ;
    char chaine [10000] ;
    WINDOW* fenetre ;

    fichier = fopen(file, "r+") ;
    if (fichier == NULL) {
    perror("Cannot open input file") ;
    exit(1) ;
    }
    
    initscr();          
    cbreak();             
    noecho();             
    keypad(stdscr, TRUE); 
    refresh();
    cond_map(ac,av);
    checkwin();
    made_window(fenetre);
    tmp = coord(ac,av);
    read_map(chaine,fichier);
    y = tmp.y;
    x = tmp.x;
    made_mouv(x,y);
   // read_map(chaine,fichier);
    //y = tmp.y;
   // x = tmp.x;
    //made_mouv(x,y);
    endwin();
    delwin(fenetre);
    return 0;
}