#include<stdio.h>

int main(void){

    int num1,num2;

    printf("첫번째 정수를 입력하시오 :");
    scanf("%d",&num1);
    printf("두번째 정수를 입력하시오 :");
    scanf("%d",&num2);

    printf("%d & %d = %d\n",num1,num2,num1&num2);
    printf("%d | %d = %d\n",num1,num2,num1|num2);
    printf("%d ^ %d = %d\n",num1,num2,num1^num2);
    

    return 0;
}