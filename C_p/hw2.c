#include<stdio.h>
int main(void){

    double i ;


    printf("Please enter kilometers :");
    scanf("%lf",&i);

    printf("%.1f km is equal to %.1f miles",i,i/1.609);

    return 0;


}