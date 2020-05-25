#include<stdio.h>
int isprime(int, int);
int main()
{
    int num, prime;
    printf("enter a number: ");
    scanf("%d",&num);
    prime=isprime(num, num/2);
    if(prime==1)
    {
        printf("the number %d is prime", num);
    }
         else
    {
        printf("the number %d is not prime",num);
    }
        return 0;
}
int isprime(int num, int i)
{
   if(i==1)
    {
        return 1;
    }
        else
        {
            if(num%i==0)
            {
                return 0;
            }
            else
            {
                return isprime(num, i-1);
            }
        }
    }
