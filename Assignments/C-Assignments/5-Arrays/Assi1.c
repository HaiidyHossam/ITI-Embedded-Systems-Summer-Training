#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int max,min;

    printf("enter numbers \n");
    for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<10;i++){
    if(arr[i]>max) max=arr[i];

    if(arr[i]<min) min=arr[i];
    }
    printf("The max is %d ",max);
    printf("The min is %d ",min);

    return 0;
}
