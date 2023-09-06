#include <stdio.h>
#include <stdlib.h>
void sum(int num1,int num2){

printf("sum is is %d \n",num1+num2);
}

void anding (int num1,int num2){
    printf("anding is %d \n",num1&num2);
}
void not ( int num1){
    int x= ~num1;
    printf("result is %d \n",x);
}
int main()
{
    char operato;
    int n1,n2;

    printf("enter operator \n");
    scanf("%c",&operato);
    switch(operato){
    case '+':
        printf("enter 2 numbers \n");
         scanf("%d",&n1);
         scanf("%d",&n2);
        sum(n1,n2);
        break;
        case '&':
        printf("enter 2 numbers \n");
         scanf("%d",&n1);
         scanf("%d",&n2);
        anding(n1,n2);
        break;
        case '!':
        printf("enter one numbers \n");
         scanf("%d",&n1);
        not(n1);
        break;
    }


    return 0;
}