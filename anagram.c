#include<stdio.h>

int main()
{
    int nt;
    printf("Enter the number of test cases\n");
    //scanf("%d",&nt);
    int i;
    //char **words = (char **)malloc(2*nt*sizeof(char*));
    int **num;//;=//(int **)malloc(2*sizeof(int*));
   int *num1;
   int acnum=12;
   num=&num1;
   num1=&acnum;
   printf("**num= %u,\t*num= %u,\tnum= %u",**num,num1,acnum);
     printf("\n*num= %u,\t&num1= %u,\t&num= %u\n",nnum,&num1,&acnum);
   /* for(i=0;i<nt;i++)
    {
   // words[i]=(char *)malloc(100*sizeof(char*));
        printf("\nTest case no. %d \n Enter first word ",i);
//*(words[i])="Hello";
num[i]=(int *)malloc(2*sizeof(int*));
     // printf("%u\t%u\t%u",words[i],*(words[i]));
      // scanf("%s",*words[i]);
printf("%u\t%u\t",num[i],*(num[i]));
*(num[i])=12;x
     printf("\t%d",*(num[i]));

    //  printf("\t%s",**(words[i]));
    }*/
return 0;
}
