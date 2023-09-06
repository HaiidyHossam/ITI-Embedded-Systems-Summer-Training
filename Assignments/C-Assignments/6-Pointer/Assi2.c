#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=3;
    int y=4;
    int z=5;
    int* p=&x;
    int* q=&y;
    int* r=&z;
    printf("x= %d \n",x);
    printf("y= %d \n",y);
    printf("z= %d \n",z);

    printf("p= %d \n",*p);
    printf("q= %d \n",*q);
    printf("r= %d \n",*r);

    printf("swapping pointers \n");
    r=p;
    p=q;
    q=r;
    printf("x= %d \n",x);
    printf("y= %d \n",y);
    printf("z= %d \n",z);

    printf("p= %d \n",*p);
    printf("q= %d \n",*q);
    printf("r= %d \n",*r);


    return 0;
}
