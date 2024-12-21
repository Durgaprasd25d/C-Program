#include <stdio.h>
#include <stdlib.h>

int main(){
    int fno,sno,*ptr1=&fno,*ptr2 = &sno;
    printf("\n \n Pointer : Find the maximum number between two numbers :\n");
    printf("---------------------------------------------\n");
    printf("Input the first numbers");
    scanf("%d",ptr1);
    printf("Input the second numbers");
    scanf("%d",ptr2);
    //Compare the value pointed by ptr1 and ptr2 to find the maximum number
    if(*ptr1>*ptr2){
                    printf("\n\n %d is the maximum number.\n\n",*ptr1);
                    }else{
                            printf("\n\n %d is the maximum number.\n\n",*ptr2);
                          }
                          return 0;
    }
