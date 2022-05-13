#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>

#include <fcntl.h>
char **mymalloc2d(int ligne,int colonne);
char **maze;
int **playing;
int cols; 
int rows;
int start_rows;
int start_cols;

enum game_map {
    empty,
    wall,
    goal,
    crumb
};
int getWords(char *str,char**tmp)
{
    int n=0,i = 0,j=0;

    while(1){
        if (str[i] != '\n' ){
            tmp[n][j++]=str[i];
            //if (str[i]== '\n')
              //  printf("cols:%i",i);
            }
    
        else{
		tmp[n][j]='\0';//insert NULL
		n++;
		j=0;
		}
        i++;
		if(str[i]=='\0')
         break;
    } 
    if (tmp == NULL)
        return 84;
    
    return n;
	
}	
char **my_string(char *str){
   char buff[10000];
  
    int size = sizeof(buff)+1;
    int fd1 = open(str,O_RDWR);
    int fd2 = read(fd1,buff,size);
    char **tmp = mymalloc2d(50,50);
    getWords(buff,tmp);
    return tmp;
}
char **mymalloc2d(int ligne,int colonne)
{
    int count = 0;
    char ** tab = malloc(ligne * sizeof(*tab));
    while (count <= ligne)
    tab[count++] = malloc(colonne * sizeof(tab));
    return tab;
}
int **mymalloc2d_array(int ligne,int colonne) {
    int count = 0;
    int ** tab = malloc(ligne * sizeof(*tab));
    while (count <= ligne)
    tab[count++] = malloc(colonne * sizeof(tab));
    return tab;
}
int count_n(char *chaine) {
    int count = 0;
    for(int k = 0; chaine[k] != '\0';k++) {
        if (chaine[k]== '\n'){
            count ++;
            }
        }
        return count;
}
int strlen_stock(char *str) {
    int i;
    for(i = 0; str[i]!= '\0';i++);
    //printf("count = %i",i);
    return i;
}
void read_map(char *map) ;
int count_cols(char *map)
{
    int count_one = 0;
    int i = 0, j=0;
    char chaine[10000];
    int size = sizeof(chaine)+1;
    int fd1 = open(map,O_RDWR);
    int fd2 = read(fd1, chaine, size);
    int count = count_n(chaine);
    int *tmp = malloc(sizeof (int)* count);
    char **tmp2 = mymalloc2d(1000,1000);
    
    getWords(chaine,tmp2);
      for(int i = 0; i < count;i++) {
        tmp[i] = strlen_stock(tmp2[i]);
        //printf("%i",tmp[i]);
    }
    for(int i = 0; i < count; i++) {
        if(tmp[0] < tmp[i])
           tmp[0] = tmp[i];
    }
    cols = tmp[0]+1;
   // printf("cols1=%i\n",cols);
    return cols;
    
}

int count_rows(char *filename) {
   
    int i = 0, j=0,count=0;
    char chaine[100000];
    int size = sizeof(chaine)+1;
    int fd1 = open(filename,O_RDWR);
    int fd2 = read(fd1, chaine, size);
    count = count_n(chaine);
    rows = count+1;
  //  printf("rows=%i\n",count);
    return count;

    //printf("rows=%i",count);
}

void alloc_game () {
    maze = mymalloc2d(rows,cols);
    playing = mymalloc2d_array(rows,cols);
}

void gt_maze(char *filename) {
    char c;
    char rows_s[3] = { '\0' };
    char cols_s[3] = { '\0' };
    int row_i = 0;
    int cols_i = 0;
    int swap = 0;
    FILE *file = fopen(filename,"r");

    if (file == NULL) {
        perror("error");
    }
    alloc_game();
  /*  if(file) {
        while((c=getc(file))!= EOF){ 
            if(c == '\n'){
                break;
            }else if (!swap)
        }
    }
*/
    /*for(int i = 0; i <rows;i++) {
        for(int j = 0; j <cols; j++) {
        c = getc(file);

        if (c == '\n'){
            c = getc(file);
        }
        maze[i][j] = c;
    */
    maze = my_string(filename);

      //if (c == maze[0][0]) {}
            start_rows = 0;
            start_cols = 0;
            //}
     //   }
  //  }
    //for(int i = 0; i < rows;i++) {
        //for(int j = 0; j <cols; j++) {
   // printf("%i\n",count_n(filename));
    fclose(file);
   
}
void print_maze() {
    for(int i = 0; i <= rows;i++) {
        for(int j = 0; j <=cols; j++) {
            printf("%c",maze[i][j]);
            }
        printf("\n");
        }
        printf("\n");
        //printf("print_maze()");
}
/*int main() {
    char *str = "map.txt";
    count_cols(str);
    count_rows(str);
    alloc_game();
    gt_maze(str);
    print_maze();


}*/

void gt_playing() {

    //alloc_game();
    int const_rows = rows;
    int const_cols = cols;
    printf("rows=%i\n",const_rows);
    printf("cols=%i\n",const_cols);
    const char tmp = '*';//maze[const_rows][const_cols];
    
  /*  for(int i = 0; i <= rows;i++) {
        printf("%s\n",maze[i]);
    }
    */
    for(int i = 0; i < const_rows;i++) {
        for(int j = 0; j <= cols-2; j++) {
            if (maze[i][j]== 'X') {
                //printf("%c",maze[i][j]);
                playing[i][j] = 1;

            }
           // else if (maze[i][j] == tmp){
             //   playing[i][j] = 2;
            else {
            playing[i][j] = 2;
            }
        }
    }
}
void print_playing() {
    for(int i = 0; i <= rows;i++) {
        for(int j = 0; j <= cols; j++) {
            printf("%d ",playing[i][j]);
            }
            printf("\n");
        }
        printf("\n");
}
int main() {
    char *str = "map.txt";
    count_cols(str);
    count_rows(str);
    alloc_game();
    gt_maze(str);
    print_maze();
    gt_playing();
    print_playing();
    print_maze();


}

/*int DFS(int rows,int cols) {
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
                if(playing[i][j] == crumb) {
                    maze[i][j] = '.';
                }
            }
        }
    }
}

int main(int ac, char **av) {

    char *str = av[1];
    printf("rows :: %i\n",rows);
    printf("cols :: %i\n",cols);
    count_rows(str);
    count_cols(str);
    printf("rows :: %i\n",rows);
    printf("cols :: %i\n",cols);
    gt_maze(str);
    gt_playing();
    print_playing();
    print_maze();
    DFS(start_rows,start_cols);
    add_crumbs();
    print_maze();
    print_playing();
    return 0;
}*/


