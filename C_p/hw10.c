#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct city
{
    char name[20];
    char country[20];
    int population;
}City;


int main(void){
    int i;
    City ct[3];

    printf("Input three cities:\n");
    for (i=0;i<3;i++){
        printf("Name>");
        fgets(ct[i].name,sizeof(ct[i].name),stdin);
        ct[i].name[strlen(ct[i].name)-1]='\0';

        printf("country>");
        fgets(ct[i].country,sizeof(ct[i].country),stdin);
        ct[i].country[strlen(ct[i].country)-1]='\0';

        printf("population>");
        scanf("%d",&(ct[i].population));
        while (getchar() != '\n');
    }

    printf("Printing the three cities:\n");
    for (i=0;i<3;i++){
        printf("%d %s in %s with a population of %d people\n",i+1,ct[i].name,ct[i].country,ct[i].population);
    }
    return 0;

}
