#include<stdio.h>
#include<math.h>


float deviation(int *array){
    int i,sum=0,avg=0,var=0;
    float dev=0;
    for (i=0;i<5;i++){
        sum=sum+array[i];
    }
    avg=sum/5;
    for (i=0;i<5;i++){
        var=var+(double)pow(array[i]-avg,2);
    }
    dev=(double)sqrt(var/5);
    return dev;
}


int main(void){
    int arr[5];

    printf("Enter 5 real numbers: ");
     scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("Standard Deviation = %.3lf",deviation(arr));

}