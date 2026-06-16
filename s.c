#include <stdio.h>
int main()
{
    int sum, n;
    printf("Enter the no. of N :");
    scanf("%d", &n);
    sum = n * (n - 1) / 2;
    printf("sum is : %d", sum);
    return 0;
}
