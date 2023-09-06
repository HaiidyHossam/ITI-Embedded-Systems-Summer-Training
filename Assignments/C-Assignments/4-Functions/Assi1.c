#include <stdio.h>
#include <stdlib.h>
void max_f(num1,num2,num3,num4){
int max=0;
if(num1>num2 && num1>num3 && num1>num4){
    max=num1;
}
else if(num2>num1 && num2>num3 && num2>num4){
    max=num2;
}
else if(num3>num2 && num3>num1 && num3>num4){
    max=num3;
}
else{
    max=num4;
}
printf("max is %d \n",max);
}

void min_f(num1,num2,num3,num4){
int min=0;
if(num2>num1 && num4>num1 && num3>num1){
    min=num1;
}
else if(num1>num2 && num3>num2 && num4>num2){
    min=num2;
}
else if(num1>num3 && num2>num3 && num4>num3){
    min=num3;
}
else{
    min=num4;
}
printf("min is %d",min);
}
int main()
{
    int num1,num2,num3,num4;

    printf("enter numbers \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    scanf("%d",&num4);
   max_f(num1,num2,num3,num4);
   min_f(num1,num2,num3,num4);

    return 0;
}