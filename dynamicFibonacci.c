#include<stdio.h>
#define MAX_SIZE 100
int cache[MAX_SIZE];
static int complexity=0;
static int no_of_calls=0;
int initializeCache()
{

    int i;
    for(i=0;i<MAX_SIZE;i++)
    {

        cache[i]=-1;
    }
}
int fibonacci(int n){
 no_of_calls++;
    printf("\n %d iteration\n",n);
if(n<=2)
{
    complexity++;
    cache[n]=1;
    complexity++;
        return cache[n];
}
if(cache[n]!=-1)
{
    complexity++;
printf("\nFound in cache at %d position and value %d",n,cache[n]);
    return cache[n];
}
else
{
    complexity++;
    cache[n]=fibonacci(n-2)+fibonacci(n-1);
    complexity++;
    printf("\n%d",cache[n]);
    return cache[n];
}
}
int main()
{
    initializeCache();
    int sum=fibonacci(20);
    printf("\nNumber = %d and complexity = %d",sum, complexity);
    printf("\nNo. of calls %d",no_of_calls);

}
