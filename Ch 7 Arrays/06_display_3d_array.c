#include<stdio.h>


// NOTE:
// here we can't write arr[][] where both the square brackets are empty
// we should declare atleast one dimension if the array is multidimentional
void display(int arr[][2], int n_students, int n_subjects);

void main(){
    int arr[3][2];
    
    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            printf("Enter the marks of subject %d of student %d : ",j+1, i+1);
            scanf("%d",&arr[i][j]);
        }
    }

    display(arr,3,2);
}

void display(int arr[][2], int n_students, int n_subjects){
    for(int i=0; i<n_students;i++){
        for(int j=0; j<n_subjects; j++){
            printf("\nthe marks of subject %d of student %d = %d",j+1,i+1,arr[i][j]);
        }
    }
}