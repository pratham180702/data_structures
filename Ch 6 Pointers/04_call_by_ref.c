#include<stdio.h>

void swap(int *a, int *b);

void main(){
    int a=5, b=6;
    int *j,*k;
    j= &a;
    k= &b;
    printf("The value of a and b before swap is %d and %d \n", a,b);
    swap(j,k);
    printf("The value of a and b after swap is %d and %d ", a,b);

}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}