

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_RLEN 50
#include <ctype.h>
//#include <conio.h>
#include <curses.h>

typedef struct recurrence{
    char letter[27];
    int count[100];
    int len;

} rec;

/* Returns the Run Length Encoded string for the 
   source string src */
char* encode(char* src)
{
    rec p;
    int rLen;
    char count[MAX_RLEN];
    int len = strlen(src);

    /* If all characters in the source string are different, 
    then size of destination string would be twice of input string.
    For example if the src is "abcd", then dest would be "a1b1c1d1"
    For other inputs, size would be less than twice.  */
    char* dest = (char*)malloc(sizeof(char) * (len * 2 + 1));

    int i, j = 0, k;

    /* traverse the input string one by one */
    for (i = 0; i < len; i++) {

        /* Copy the first occurrence of the new character */
        dest[j++] = src[i];

        /* Count the number of occurrences of the new character */
        rLen = 1;
        while (i + 1 < len && src[i] == src[i + 1]) {
            rLen++;
            i++;
        }

        /* Store rLen in a character array count[] */
        sprintf(count, "%d", rLen);

        /* Copy the count[] to destination */
        for (k = 0; *(count + k); k++, j++) {
            dest[j] = count[k];
        }
    }

    /*terminate the destination string */
    dest[j] = '\0';
    //stock(dest);
    return dest;
}
/*rec stock(char *dest) {
    int len = strlen(dest);
    rec p;
    for(int i = 0; i != len;i++) {
        if ( dest[i] >= 'a' && dest[i] <= 'z')
        {
            p.letter[i] = dest[i];
            printf("letter=%c \n",p.letter[i]);
            p.count[i] = dest[i+1] - '0';
            printf("count=%i\n",p.count[i]);
        }
}   
return p;
}

char* substring(char *destination, const char *source, int beg, int n)
{
    // extracts `n` characters from the source string starting from `beg` index
    // and copy them into the destination string
    while (n > 0)
    {
        *destination = *(source + beg);
 
        destination++;
        source++;
        n--;
    }
 
    // null terminate destination string
    *destination = '\0';
 
    // return the destination string
    return destination;
}
 
char * solve(char const  *s) {
    int i = 0;
    char *ans = "";
    char *tmp = malloc(sizeof(char)*strlen(s));
    char *tmp2 = malloc(sizeof(char)*strlen(s));
    int t;
    while (i < strlen(s)) {
        int j = i;
        while (isdigit(s[j]) && (j < strlen(s))) {
            j ++;
        }
        int a = atoi(substring(tmp,s,i, j - i + 1));
        int k = j;
        while (isalpha(s[k]) && k < strlen(s)) {
            k ++;
        }
        t = strlen(substring(tmp2,s,j, k - j));
        for (int k = 0; k < a; ++ k) {
            ans += t;
        }
        i = k;
    }
    printf("%s",ans);
    return ans;
}
void decode_rle(char *a,int length)
{
    //char op[50];
    rec p;
    int i;
    for(i=0;i<length;i++)
    {
        while( a[i] >= 'a' && a[i] <= 'z')
        {
            p.letter[i] = a[i];
            p.count[i] = a[i+1] - '0';
        }
        p.len = length;
    }
    for (i = 0; i != strlen(p.letter);i++){
        printf("count = %i",p.count[i]);
        }
}
void printstruct(rec p) 
{
    int temp;
    char temp1;
    //int len2 = p.len;
    int len3 = strlen(p.letter);
    printf("len3=%i\n",len3);
    for (int step = 0; step < p.len - 1; ++step) {
        for (int i = 0; i < p.len - step - 1; ++i) {
            if (p.count[i]>p.count[i+1]) {
                temp = p.count[i];
                temp1 = p.letter[i];
                p.count[i] = p.count[i+1];
                p.letter[i] = p.letter[i+1];
                p.count[i+1] = temp;
                p.letter[i+1] = temp1;
                }
            }
        }
        //for(int i = 1; i <= len3 ;i++)
        //printf("letter = %c\n",p.letter[i]);
        //int a = 0;
      //  for(int i = 1; i <= len3 ;i++){
          //  printf("count = %i\n",p.count[i]);
       // a++;
     //  char Word2[len3];
    //   strcpy(Word2,&p.letter[1]);
    //   printf("%s\n", Word2);}
   
        for (int i  = 0 - 1; i < len3-1; i++)
        p.count[i] = p.count[i+1];
        for(int i = 0; i <= len3 ;i++){
        printf("count2 = %i\n",p.count[i]);
        }
       // char Word2[len3];
       // strcpy(Word2,&p.letter[1]);
        printf("%s\n", p.letter);
}
char *solve2(char const *s){
      char output = "";
      char num="";
      for (int i = 0, s[i] != '\0',i++){
         if (isalpha(s[i]){
            output+=i*int(num);
            num="";
            }
         else
            num+=i;
        }
      return output;
}*/
char *decode_rle(char *a,int length)
{
    char *op= malloc(sizeof(char)*100);
    int i,j,k=0,count=0;
    for(i=0;i<length;i++)
    {
        if( a[i] >= 'a' &&  a[i] <= 'z')//|| a[i]=='b' || a[i]=='c' || a[i]=='d' || a[i]=='e' || a[i]=='f' || a[i]=='g')
        {
            count = a[i+1] - '0';
            for(j=0;j<count;j++)
            {
                op[k]=a[i];
                k++;
            }
        }
    }
    op[k] = '\0';
printf("\n the decoded string is %s\n",op);
    return op;
}

int main(int ac, char **av)
{
    int i=0,j,length,count;
    char *a = malloc(sizeof(char)*2000),*output = malloc(sizeof(char)*10000);
    char *src = av[1];
    if (av[1] == NULL)
    return 0;
    a = encode(src);
    printf("\n The string you entered is %s",a);
    length = strlen(a);
    printf("\n length is %d\n",length);
    output = decode_rle(a,length);
    //printf("a");
    i=0;
    while(output[i]!='\0')
    {
        printf("%c",output[i]);
        i++;
   }

    return 0;
}
/*int main()
{
   char op[50];
    //rec p;
    char str[] = "aabbccggg";
    char* res = encode(str);
    printf("%s", res);


    decode_rle(str,strlen(str));
    char *tmp2 = solve2(res);
    printstruct(p);
    printf("%s", res);
   printf("%s", tmp);
    printf("%s",tmp2);
    getchar();
}*/