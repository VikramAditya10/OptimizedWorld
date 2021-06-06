#include <stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool max(int a, int b,int c){
    if(a>=b&&a>=c){
        return TRUE;
    } else {
        return FALSE;
    }
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++){
    if(i>0&&i<6&&max(arr[i],arr[i-1],arr[i+1])){
        printf("%d",arr[i]);
    break;
        
    }
    if(i==0&&arr[i]>=arr[i+1]){
        printf("%d",arr[i]);
    
        break;
    }
    if(i==6&&arr[i]>=arr[i-1]){
        printf("%d",arr[i]);
        break;
    }
    
}
    return 0;
}
