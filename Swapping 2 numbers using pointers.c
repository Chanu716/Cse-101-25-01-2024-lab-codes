#include <stdio.h>

int main() 
{

    int x, y, temp;
    int *p1, *p2;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x ,&y);

    printf("\nBefore swapping x = %d and y = %d", x, y);


    p1 = &x;
    p2 = &y;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter swapping x = %d and y = %d", x, y);

    return 0;
}