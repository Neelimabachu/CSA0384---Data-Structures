#include <stdio.h>

 
int main()
{
    int n, i,factorial = 1;
 
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
    if (n < 0)
        printf(" Please enter any positive integer number");
 
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial =factorial*i;              
        }
        printf("Factorial of Number %d = %d", n, factorial);
    }
 
}
