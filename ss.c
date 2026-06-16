#include <stdio.h>
int main()
{
    int mul =1, n;
    printf("Enter the no. of N :");
    scanf("%d", &n);
    
    for(int i=1;i<=10;i++){
        
        mul = n*i;
        
        
        printf("%d\n ",mul);
    }
    
    return 0;
}
