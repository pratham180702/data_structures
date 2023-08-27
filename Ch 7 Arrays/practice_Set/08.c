#include<stdio.h>

void main(){
    int arr[2][4][3];
    int count=0;
    int *ptr;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr[i][j][k]= count;
                count++;
            }
            
        }
        
    }

    // ptr = arr;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                ptr = &arr[i][j][k];
                printf("array value is : %d and its address is : %u\n",arr[i][j][k], ptr);
                // ptr++;
            }
            
        }
        
    }
    
}