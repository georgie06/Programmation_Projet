#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
char **maze;
int **playing;
int cols; 
int rows;
int start_rows;
int start_cols;

enum game_map {
    empty,
    wall,
    crumb,
    goal,
};


void count_cols(char *filename) {
    char buff[10000];
  
    int size = sizeof(buff)+1;
    
    int fd1 = open(filename,O_RDWR);

    int fd2 = read(fd1,buff,size);
    int j = 0;
    printf("read=%i",fd2);
    printf("open=%i\n",fd1);
    int i = 0;
    int *tmp = malloc(sizeof (int)* strlen(filename));
   // while(*buff!= '\0') {
    for(int j = 0; buff[j] != '\n';j++); //{
            //tmp[i] = j;
      //  }
   /// }
    /*for(i = 1; i < 1000; ++i)
    {
       if(tmp[0] < tmp[i])
           tmp[0] = tmp[i];
    }
    cols = tmp[0];*/
    printf("%i",j);
}
int main(int ac,char **av) {
    char *str = malloc(sizeof(char)*strlen(av[1]));
    str = av[1];
    count_cols(str);
}
void count_rows(char *filename) {
    int i = 0;
    int count = 0;
    for(; filename[i] != '\0'; i++) {
        if (filename[i] == '\n'){
            count ++;
        }
    }
    rows = count;
}

void alloc_maze () {
    maze = malloc(sizeof(char *)*rows);
    for(int i = 0; i <rows;i++)
        maze[i] = malloc(sizeof(char*)*cols);
}
void alloc_playing() {
    playing = malloc(sizeof(int *)*rows);
    for(int i = 0; i <rows;i++)
        playing[i] = malloc(sizeof(int *)*cols);
}

void gt_maze(char *filename) {
    char c;
    FILE *file = fopen(filename,"r");
    alloc_maze();
    for(int i = 0; i <rows;i++) {
        for(int j = 0; j <cols; j++) {
        c = getc(file);
        if (c == '\n'){
            c = getc(file);
        }
        maze[i][j] = c;
        if (c == maze[0][0]) {
            start_rows = i;
            start_cols = j;

        }
        }
    }
    fclose(file);
}
void print_maze() {
    for(int i = 0; i <rows;i++) {
        for(int j = 0; j <cols; j++) {
            printf("%c ",maze[i][j]);
            }
            printf("\n");
        }
        printf("\n");
}
void gt_playing() {

    alloc_playing();
    for(int i = 0; i <rows;i++) {
        for(int j = 0; j <cols; j++) {
            if (maze[i][j]== maze[0][0]) {
                playing[i][j] = wall;

            }else if (maze[i][j] == maze[rows][cols]){
                playing[i][j] = goal;
            }else {
                playing[i][j] = empty;
            }
        }
    }
}
void print_playing() {
    for(int i = 0; i <rows;i++) {
        for(int j = 0; j <cols; j++) {
            printf("%d ",playing[i][j]);
            }
            printf("\n");
        }
        printf("\n");
}
int DFS(int rows,int cols) {
    int *resolve = &playing[rows][cols];//i,j
    if (*resolve == goal) {
    return 1;
    }
    if (*resolve == empty) {
        *resolve = wall;//or crumb
        if (DFS(rows,cols-1) ){
            *resolve = crumb;
            return 1;
        }
        if (DFS(rows+1,cols) ){
            *resolve = crumb;
            return 1;
        }
        if (DFS(rows,cols+1) ){
            *resolve = crumb;
            return 1;
        }
        if (DFS(rows-1,cols) ){
            *resolve = crumb;
            return 1;
        }

    }
    return 0;

}
void add_crumbs() {
    for(int i = 0; i <rows;i++) {
        for(int j = 0; j <cols; j++) {
            if (maze[i][j] != maze[0][0]) {
                if(playing[i][j]== crumb) {
                    maze[i][j] = '.';
                }
            }
        }
    }
}

/*int main(int ac, char **av) {

    char *str= av[1];
    char **maze;
    int **playing;
    int cols; 
    int rows;
    int start_rows;
    int start_cols;
    gt_maze(str);
    gt_playing();
    print_maze();
    DFS(start_rows,start_cols);
    add_crumbs();
    print_maze();
    //print_playing();
    return 0;
}*/


