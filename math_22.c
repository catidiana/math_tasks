#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char **a,int size) {
    int i, j;
    char* x;

    for( i=0; i < size; i++) {
        for( j = size-1; j > i; j-- ) {
            if (strcmp(a[j-1],a[j])>0){
                x=a[j-1];
                a[j-1]=a[j];
                a[j]=x;
            }
        }
    }
}
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

int main()
{
    char *word[5163];
    for (int i=0;i<5163;i++) {

        word[i]=(char*)malloc(20);
    }
    FILE *fp;
    fp = fopen("names.txt", "r");
    for (int i=0;i<5163;i++) {

        //fscanf(fp, "%s", word[i]);
        fscanf (fp, "\"%19[A-Z]\",", word[i]);
    }
    bubbleSort(word, 5163);
    /*for (int i=0;i<5163;i++) {

        printf("%s\n", word[i]);
    }*/
    int num[5163];
    long long total=0;
    for (int i=0;i<5163;i++) {
        num[i]=char_to_num(word[i])*(i+1);
        total=total+num[i];
    }
    printf("Result is %llu\n", total);

    return 0;
}
