/*
การใช้loop
มีแบบwhileและfor
while(เงื่อนไข)
for(;;;)*/
//example
#include <stdio.h>
int main()
{
    int a =1,b=2;
    while(a<b){
        a++;
    }
    for(int i = 10;i < a;a++){
        b++;
    }
    printf("%d %d",a,b);
}