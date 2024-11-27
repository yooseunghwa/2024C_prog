#include<stdio.h>
#include<string.h>


int main(void){
    int i,count;
    char in[50];

    printf("input : ");
    fgets(in,sizeof(in),stdin);
    count=strlen(in);

    printf("output : ");
    for(i=0;i<count;i++){
        if(in[i]>='A'&& in[i]<='Z'){
            printf("%c",in[i]+32);
        }else if (in[i]>='a' && in[i]<='z'){
            printf("%c",in[i]-32);
        }
        else{
            printf("%c",in[i]);
        }
    }
    printf("\n");
}