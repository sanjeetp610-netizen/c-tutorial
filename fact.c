#include <stdio.h>

int main() {
   int n,fact=1;
   
   printf("Enter the no. of N : ");
   
   scanf("%d",&n);
   
   for(int i=1;i<=n;i++){
       
       fact = fact*i;
       
       
   }
   printf("factorial of %d is : %d",n,fact);

    return 0;
}
