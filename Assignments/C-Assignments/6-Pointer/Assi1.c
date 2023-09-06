#include <stdio.h>
#include <stdlib.h>
void Bubble(int arr[]){
 int temp;
    for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
        if(arr[j]>arr[j+1]){
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        }}
    }
    for(int k=0;k<8;k++){
        printf ("%d ",arr[k]);
    }

}
int main()
{
    int arr[8]={5,4,15,99,-1,3,2,1};
    Bubble(arr);


    return 0;
}