#include<stdio.h>

int main()
{
    const int a=10;
        const int b=20;
    int *ptr;
    ptr=&a;
      ptr=&b; // here we can change the address of a pointer
    //*ptr=20;// we can change the value in a using pointer
    
  //  a=20; //read-only value of a
    printf("%d",*ptr);
}