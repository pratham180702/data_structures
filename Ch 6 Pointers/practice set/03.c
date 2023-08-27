#include<stdio.h>

void change_ten_times(int *j);

void main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int *add_of_num = &num;

    printf("The value of your entered number before passing to the function : %d", num);
    change_ten_times(add_of_num);
    printf("\n Now the value of num is : %d",num);
    
}

void change_ten_times(int *j){
    *j = 10*(*j);
}