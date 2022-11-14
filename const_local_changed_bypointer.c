#include <stdio.h>

int main()
{
    const int a=10;
    int *b=&a;
    
    printf("value of const. is %d\n",a);
    
    *b=30;//changing the value of const using a pointer as const is declared as local variable
    
    printf("the value of const now. is:%d",a);
    

    return 0;
}
