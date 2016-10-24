#include <stdio.h>
#include <math.h>
int check(int n, int d)
{
    /*following function returns 1 if it is prime and 0 if it is not prime*/
    /*function returns -1 if invalid data is given*/
   return n<1?-1:n<=2?1:((n%d)==0? 0:(d>(sqrt(n)) ?1:check(n,d+1)));
}
int main()
{
printf("\nPrime  %d\n",check(99,2));
    return 0;
}
