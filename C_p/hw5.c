#include<Stdio.h>
int binary(int num){
    if (num>0){
        if (num%2==0){
            binary(num/2);
        }else{
            binary((num-1)/2);
        }
        printf("%d",num%2);
    }
}
int main(void){
    int i;
    printf("Please enter a number: ");
    scanf("%d",&i);
    binary(i);

    return 0;

}