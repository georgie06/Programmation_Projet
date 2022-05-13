#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#define LARGEUR 20      /* Largeur de la fenêtre */
#define HAUTEUR 10      /* Hauteur de la fenêtre */
#define POSX    20      /* Position horizontale de la fenêtre */
#define POSY    5       /* Position verticale de la fenêtre */
#define DELAY 30000
#define PLAYER 'P'
#define EMPTY ' '
#define LIMITE '#'
#define except 'X'

void checkwin()
{
    if ((COLS < POSX + LARGEUR) || (LINES < POSY + HAUTEUR)) {
      endwin() ;
      fprintf(stderr, "Les dimensions du terminal sont insufisantes : l=%d,h=%d au lieu de l=%d,h=%d\n",COLS, LINES, POSX + LARGEUR, POSY + HAUTEUR);
      exit(EXIT_FAILURE) ;
    }
}

int is_move_okay(int y, int x)
{
    int testch ;

    testch = mvinch(y, x) ;
    return (testch == EMPTY || testch == except) ;
    // putchar(except);
}


void main(int argc, char **argv) 
{
    int ch ;
    int x ;
    int y ;
    const char *file = argv[1] ;
    FILE* fichier = NULL ;
    char chaine [10000] ;
    WINDOW* fenetre ;
                                                                                                                                                                                  
    initscr();          /* Demarre le mode ncurses */
    cbreak();             /* Pour les saisies clavier (desac. mise en buffer) */
    noecho();             /* Desactive l'affichage des caracteres saisis */
    keypad(stdscr, TRUE); /* Active les touches specifiques */
    refresh();            /* Met a jour l'affichage*/

    if (argc != 2) {
    printf("Usage: %s <a c file name>\n", argv[0]) ;
    exit(1) ;
  }
    fichier = fopen(file, "r+") ;
    if (fichier == NULL) {
    perror("Cannot open input file") ;
    exit(1) ;
    }
    checkwin();
    
    fenetre = newwin(HAUTEUR, LARGEUR, POSY, POSX) ;
    wbkgd(fenetre, COLOR_PAIR(2)) ;
    wrefresh(fenetre) ;
    while (fgets(chaine,10000,fichier) != NULL) {
        printw("%s", chaine) ;
 
        refresh() ;
    }
    y = LINES / LINES ;
    x = 3 ;
    do {
        mvaddch(y,x,except) ;
        move(y,x) ;
        //       movex(y,x);
        ch  = getch() ;
        refresh() ;

        switch (ch) {
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
                     mvaddch(y,x,except) ;                                                                                                                                                    break ;
        case KEY_RIGHT:
        case 'd':
        case 'D':
            if ((x < COLS - 1) && is_move_okay(y, x + 1)) {
                  mvaddch(y, x, EMPTY) ;
                  x = x + 1 ;
            }
            break ;
        }
    }
    while (ch != 'q' && ch != 'Q') ;

    endwin() ;

    delwin(fenetre) ;
}
