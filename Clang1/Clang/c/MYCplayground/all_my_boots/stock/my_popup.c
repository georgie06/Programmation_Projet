#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

/*int middle (window *win,char *str) {
    int center_col =  
}
//void getmaxyx(WINDOW *win, int y, int x);
//int mvwprintw(WINDOW *win, int y, int x, char *fmt, ...);
*/
enum {LENGTH = 0, HEIGHT = 6};
int main(){
    char const str[7][12] = { {"##########"}, {"#        #"}, {"# PXO  ###"}, {"#        #"}, {"#        #"},{"##########"}};
    
	//initscr();			/* Start curses mode*/ 		  
    int row;
    int col;
    box(stdscr,0,0);
    getmaxyx(stdscr,row,col); 
    int len = (col-strlen(str[0]))/2;

    for (int i = 0; i < 6; ++i){
            mvprintw(row-i/2,len,str[i]);
            refresh();
        }
        
    
          //  mvprintw(row-i/2,len,str[i][j]);
    
    
  //  refresh();			/* Print it on to the real screen */
	int ch = getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */
    keypad(stdscr, TRUE);
    if(ch == KEY_BACKSPACE){
        exit(84);
    }

	return 0;
}