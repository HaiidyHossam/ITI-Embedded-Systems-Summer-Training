#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,m;
   n=6;
    m=n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m-1;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=2*i-1;k++)
       {
         printf("*");
       }
       m--;

      printf("\n");
    }

    return 0;
}
/*
0-1
1-3
2-5
3-7
4-9
j=2*i +1
*/
/*
0--6 -- 7
1--5 --8
2--4 --9
3--3 --10
4--2
5--1
j=6-i
__________
6 11
*/