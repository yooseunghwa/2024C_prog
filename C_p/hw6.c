#include<stdio.h>
int main(void){
    int str[5];
    int odd[5],even[5];
    int i,o=0,e=0;

    printf("Please input five integers:");
    scanf("%d %d %d %d %d",&str[0],&str[1],&str[2],&str[3],&str[4]);
    for (i=0;i<5;i++){
        if(str[i]%2==0){
            even[e]=str[i];
            e++;
        }
        else {
            odd[o]=str[i];
            o++;
        }
    }
    printf("\n");
    printf("Odd numbers :");
    for (i=0;i<o;i++){
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("Even numbers :");
    for (i=0;i<e;i++){
        printf("%d ",even[i]);
    }
    

}