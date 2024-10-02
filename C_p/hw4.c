#include<stdio.h>
int main(void){

    int i,num,check=1;

    printf("Please enter a number: ");
    scanf("%d",&num);

    for (i=2;i<num;i++){
        if (num%i==0){
            check=0;
            break;
        }
    }
    if (check==1){
        printf("It is a prime number");
    }
    else if(check==0){
        printf("It is not a prime number.");
    }   
    return 0;

}