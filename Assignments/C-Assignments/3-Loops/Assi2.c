#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id1=1234,pass1=7788;
    int id2=5678,pass2=5566;
    int id3=9870,pass3=1122;
    int id,pass;
    printf("enter id \n");
    scanf("%d",&id);
    if(id==id1 || id==id2 ||id==id3){
            printf("enter pass \n");
    for(int i=0;i<3;i++){
    scanf("%d",&pass);
    if(id==id1){
    if(pass==pass1){
      printf("Welcome Haiidy \n");
      break;
    }
    else{
         if(i==2){
        printf("No more tries \n"); break;
    }
    else{
         printf("try again \n");
        continue;
    }
    }
     }
      if(id==id2){
    if(pass==pass2){
      printf("Welcome Mariam \n");
      break;
    }
    else{
         if(i==2){
        printf("No more tries \n"); break;
    }
    else{
         printf("try again \n");
        continue;
    }
    }
     }
      if(id==id3){
    if(pass==pass3){
      printf("Welcome Ahmed \n");
      break;
    }
    else{

         if(i==2){
        printf("No more tries \n"); break;
    }
    else{
         printf("try again \n");
        continue;
    }

    }
     }

    }}

    else{
        printf("You are not registered");
    }

    return 0;
}