#include<stdio.h>
static int complexity=0;
static int no_of_calls=0;
int fibonacci(int n)
{
no_of_calls++;
    if(n<=2){
        complexity+=1;
        return 1;
    }
    else{
        complexity+=1;
        return fibonacci(n-2)+fibonacci(n-1);
}
}
int main()
{
    int sum =fibonacci(20);
    printf("Value = %d and complexity = %d",sum,complexity);
    printf("\nNo. of calls %d",no_of_calls);
    return 0;
}
