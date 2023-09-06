#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],num;
    int id,flag=0;
    printf("enter ten elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n enter one element to search: ");
     scanf("%d",&num);
      for(int i=0;i<10;i++){
        if(num==arr[i]){
            id=i;
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        printf("it was found here at: %d",id+1);
    }
    else{
     printf("it was not found !! ");
    }
    return 0;
}