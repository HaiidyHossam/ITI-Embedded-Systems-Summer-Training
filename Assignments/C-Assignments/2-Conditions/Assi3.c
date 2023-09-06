#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num2,num3,num1;
    int max=0;
    printf("enter num1 \n");
    scanf("%d",&num1);
    printf("enter num2 \n");
    scanf("%d",&num2);
    printf("enter num3 \n");
    scanf("%d",&num3);
    if(num1>num2 &&num1>num3 ){
      max=num1;
    }
   else if(num2>num1 &&num2>num3 ){
      max=num2;
    }
    else{
        max=num3;
    }
 printf("max is %d \n",max);

    return 0;
}