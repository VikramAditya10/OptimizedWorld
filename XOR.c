#include<stdio.h>
int main()
{
int array[6]={1, 1, 2, 2, 3};
    int a=array[0];
    printf("hj %d",a);
    int i;
    for( i=1; i<5;i++)
    {
        if(i%2!=0)
        a-=array[i];
        else
            a+=array[i];
    }
 printf("uncommon %d",a);
    return 0;
}
