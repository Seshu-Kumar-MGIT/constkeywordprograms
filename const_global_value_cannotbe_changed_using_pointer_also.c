#include <stdio.h>
const int a=10; //const. declared globally cannot be changed by pointer as it in stored in the read-only memory
int main()
{
   // const int a=10;
    int *b=&a;
    
    printf("value of const. is %d\n",a);
    
    *b=30;
    
    printf("the value of const now. is:%d",a);
    

    return 0;
}
