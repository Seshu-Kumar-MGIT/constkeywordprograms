#include<stdio.h>

int main()
{
    int a=10;
    int b=20;
    int *const ptr=&a;
    
      ptr=&b; // here we can't change the address of a pointer
    
    printf("%d",*ptr);
}