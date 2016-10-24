#include <stdio.h>
static int call=0;
void merge(int array[], int l, int mid,int r)
{

    int i=0,k=0,j=0;
    int n1[10];
    int n2[10];
for(i=0;i<(mid-l+1);i++)
{
    n1[i]=array[l+i];
            printf(" n1[%d]== %d ",i,n1[i]);
}
printf("\n");
for(j=0;j<r-mid;j++)
{
    n2[j]=array[mid+1+j];
                    printf(" n2[%d]== %d ",j,n2[j]);
}
i=0;
j=0;
k=l;
//    for(k=l; k<=r; k++)
while(i<((mid-l)+1)&&j<(r-mid))
    {
        if(n1[i]<n2[j])
        {

            array[k]=n1[i];
            i++;
        }
        else
        {


                array[k]=n2[j];
                j++;

        }
//        printf("\n");
    k++;
    }
    while(i<(mid-l+1))
    {
        printf("checking I");
array[k]=n1[i];
i++;
k++;
    }
    while(j<(r-mid))
    {
        printf("checking J");
array[k]=n2[j];
j++;
k++;
    }
    int y=0;
    printf("\nmerge(");
    for (y=l; y<=r; y++)
    {

        printf("%d, ",array[y]);
    }
    printf(")\n");


}
void sort(int array[], int l, int r)
{
if(l<r){
int mid = l+((r-l)/2);
    sort(array, l, mid);
    sort(array,mid+1,r);
     merge(array,l,mid,r);
}
}
int main()
{
    int i=0;
    int a[10]= {10,8,1,7,6,5,4,3,2,9};
    for(i=0; i<10; i++)
    {
        printf("%d, ",a[i]);

    }
    sort(a,0,9);//merge(m1,m2,8,4,4);//sort(a,10);
    for(i=0; i<10; i++)
    {
        printf("%d, ",a[i]);

    }

    return 0;
}
