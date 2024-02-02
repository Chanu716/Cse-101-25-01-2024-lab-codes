#include<stdio.h>

int main(){
    int N, arr[100], sum = 0, i;
    int *p=arr;

    printf("Enter the No. of elements in the array:");
    scanf("%d",&N);

    printf("Enter the elements of the array:");
    for (i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        sum += *p;  
        p++;      
    }
    printf("\n");
    
    printf("The sum of the array elements is equal to = %d",sum);

    return 0;
}
