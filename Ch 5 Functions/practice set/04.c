#include<stdio.h>

void fibonacci_by_loops(int num);
int fibonacci(int num);

void main(){

    printf("Enter a number : ");
    int num;
    scanf("%d",&num);
    fibonacci_by_loops(num);
    printf("\n!!!!!!!!!!!!!!!!\n");
    printf("Fibonacci Series: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    
}

void fibonacci_by_loops(int num){
    int arr[num];
    for(int i=0; i<num;i++){
        if(i==0){
            arr[i]=0;
        }
        else if(i==1){
            arr[i]=1;
        }
        else if(num<0){
            printf("Invalid input!");
            main();
        }
        else{
            arr[i]=arr[i-1]+arr[i-2];
            // fibonacci(i+1);
        }
    }
    printf("The series is : ");
    for(int j =0; j<num; j++){
        printf("%d, ",arr[j]);
    }
}


// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

