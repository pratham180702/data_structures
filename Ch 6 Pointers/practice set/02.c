#include<stdio.h>

void print_address(int a);

void main(){
    int i=5;
    int *j;
    j=&i;
    printf("The address of i before passing to the function is : %u\n",j);
    print_address(i);

}

void print_address(int a){
    int *k;
    k=&a;
    printf("The address of i in the function call is : %u", k);
}