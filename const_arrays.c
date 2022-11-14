
#include <stdio.h>
#define len 5

int change(const int arr1[])
{
    arr1[2]=10;
    /*for(int i=0;i<len;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for(int i=0;i<len;i++)
    {
        printf("%d\t",arr1[i]);
    }*/
}
int main()
{
    int  arr[len]={1,4,7,8,9};
    
    change(arr);
}