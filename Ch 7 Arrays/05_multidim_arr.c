#include<stdio.h>

void main(){

    int n_students = 3;
    int n_subjects = 2;

    int arr[n_students][n_subjects];

    for(int i=0; i<n_students;i++){
        for(int j=0; j<n_subjects; j++){
            printf("Enter the marks of subject %d of student %d : ",j+1, i+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<n_students;i++){
        for(int j=0; j<n_subjects; j++){
            printf("\nthe marks of subject %d of student %d = %d",j+1,i+1,arr[i][j]);
        }
    }


}