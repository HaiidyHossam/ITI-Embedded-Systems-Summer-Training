#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id1=1,pass1=1234;
    int id2=5, pass2=5678;
    int scanned_id=0;
     int scanned_pass=0;
    printf("enter id \n");
    scanf("%d",&scanned_id);
    if(scanned_id==id1 ||scanned_id==id2 ){
         printf("enter password \n");
    scanf("%d",&scanned_pass);switch(scanned_pass){
    case 1234:
        printf("Haidy \n");
        break;
        case 5678:
        printf("Hossam \n");
        break;
        default:
           printf("wrong pass \n");
    }
    }
    else{
      printf("wrong id \n");
    }


    return 0;
}