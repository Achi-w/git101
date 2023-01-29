//pointer
/* *p &p */
#include <stdio.h>
int main()
{
    int *p;
    int a = 5;
    p = &a;
    printf("%d\n",*p);
    printf("%d",p); 
}