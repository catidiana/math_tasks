#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//this function convert char to integer
int char_to_num(char *a)
{
    int f=0;
    int i=0;
    while (a[i]!='\0') {
      f =f+a[i]- 'A'+1;
      i++;
    }
    return f;
}
//this function test if number is triangle
int triangle (int a)
{
    int i=1;
    int test=0;
    while (1) {
        test=test+i;
        if(test<a) i++;
        else if (test==a)
        {return 1;
        break;}
        else {
            return 0;
            break;
        }
    }
}

int main()
{
    char *word[1786];
    for (int i=0;i<1786;i++) {

        word[i]=(char*)malloc(20);
    }
    FILE *fp;
    fp = fopen("words.txt", "r");
    for (int i=0;i<1786;i++) {

        //fscanf(fp, "%s", word[i]);
        fscanf (fp, "\"%19[A-Z]\",", word[i]);
    }
    /*for (int i=0;i<1786;i++) {

        printf("%s\n", word[i]);
    }*/
    int num[1786];
    int count=0;
    for (int i=0;i<1786;i++) {
        num[i]=char_to_num(word[i]);
        if(triangle(num[i])) count++;
    }
    printf("Amount of triangle words are %d\n", count);

    return 0;
}
