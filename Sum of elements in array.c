#include<stdio.h>

int main(){
    int *p;
    int N, arr[100], sum = 0, i;

    printf("Enter the No. of elements in the array:");
    scanf("%d",&N);

    printf("Enter the elements of the array:");
    for (i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array of %d elements is:", N);
    for (i=0; i<N; i++){
        printf("%d ", arr[i]);
        sum=sum+arr[i];
    }
    printf("\n");
    
    printf("The sum of the array elements is equal to = %d",sum);

    return 0;
}