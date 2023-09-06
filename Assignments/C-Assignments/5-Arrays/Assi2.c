#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[10]={30,40,50,60,70,80,90,95,79,66};//2 failed
    int arr2[10]={33,80,34,23,13,9,90,95,79,66}; //5 failed
    int arr3[10]={30,40,45,60,70,43,34,33,12,66}; //7 failed
    int n_passed1=0,n_failed1=0;
   int max1=arr1[0];
   int min1=arr1[0];
    for(int i=0;i<10;i++){
    if(arr1[i]>=50)
    {
        n_passed1++;
    }
    else
        {
            n_failed1++ ;
        }
        if(arr2[i]>=50)
    {
        n_passed1++;
    }
    else
        {
            n_failed1++ ;
        }
        if(arr3[i]>=50)
    {
        n_passed1++;
    }
    else
        {
            n_failed1++ ;
        }
     if(arr1[i]>=max1) max1=arr1[i];
      if(arr2[i]>=max1) max1=arr2[i];
       if(arr3[i]>=max1) max1=arr3[i];
       if(arr1[i]<=min1) min1=arr1[i];
      if(arr2[i]<=min1) min1=arr2[i];
       if(arr3[i]<=max1) min1=arr3[i];

    }
    printf("The number of passing students  is %d \n",n_passed1);
   printf("The number of failed students is %d \n ",n_failed1);
   printf("the highest is %d \n ",max1);
    printf("the lowest is %d \n ",min1);
    return 0;
}
