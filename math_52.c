#include <stdio.h>

//this function return the length of number
int num_len(int a)
{
    int len=0;
    while (a!=0) {
        a=a/10;
        len++;
    }
    return len;
}
//function swaps elements i and j in array;
void swap (int *array, int i, int j)
{
    int temp;
    temp = array[i];
    array[i]=array[j];
    array[j]=temp;
    return;
}

//function sorts part of array from i=left to right;
void quicksort (int *array, int left, int right)
{
    int len = right-left; //lenth of an array we sort;

    int base_pos = left;;

    for (int i=0;i<=len;i++)
    {
        if (array[left+i]<array[base_pos])
        {
            swap (array, left+i, base_pos);
            swap(array, left+i, base_pos+1);
            base_pos= base_pos+1;
        }
    }
    if (base_pos-left>1)
    {quicksort(array, left, base_pos-1);}
    if (right-base_pos>1)
    {quicksort(array, base_pos+1, right);}
}
//this function sort integer: 4235 -> 2345
int sort_number (int a)
{
    int N= num_len(a);
    int array[N];
    for (int i=0;i<N;i++) {
        array[i]=a%10;
        a=a/10;
    }
    quicksort(array, 0, N-1);
    int b=0;
    for (int i=0;i<N;i++) {
        b=b*10+array[i];
    }
    return b;
}

int main()
{
    int i=1;
    while (1) {
        int b2=i*2;
        int b3=i*3;
        int b4=i*4;
        int b5=i*5;
        int b6=i*6;
        if (num_len(b2)==num_len(b3) && num_len(b2)==num_len(b4) && num_len(b2)==num_len(b5) && num_len(b2)==num_len(b6)) {
           //printf("%d %d %d %d %d %d\n", i, b2, b3, b4, b5, b6);
            if (sort_number(b2)==sort_number(b3) && sort_number(b2)==sort_number(b4) && sort_number(b2)==sort_number(b5) && sort_number(b2)==sort_number(b6)) {break;}}
        i++;

    }
    printf("Result is %d\n", i);
    return 0;
}
