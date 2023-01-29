
/*การใช้ if else elseif
if(เงื่อนไข){}
elseif(เงื่อนไข){}
else{}
การรับinputโดยการรับตัวมาเป็นchar
โดยใช้คำสั่งfgets(ชื่อของตัวค่าที่จะรับ,ขนาดของchar,stdin)
แล้วถ้าต้องการเปลี่ยนเป็นint
โดย x(ชื่อตัวแปรที่เป็นint)=atoi(ชื่อของcharที่เรารับมา)
example*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[10];
    int b;
    fgets(a,10,stdin);
    b = atoi(a);
    if(b = 10){
    printf("%d",b);
    }
    if(b < 10){
        printf("%d",9);
    }
}