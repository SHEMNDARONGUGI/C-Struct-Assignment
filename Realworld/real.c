#include<stdio.h>
#include "real.h"

void phone_specs(struct phone Phone[10]){
for(int i = 0; i < 10; i++){
    printf("\nINPUT PHONE BRAND OF PHONE %d\n", i+1);
    scanf("%s", Phone[i].brand);
    printf("INPUT RAM:\n");
    scanf("%d", &Phone[i].ROM);
    printf("INPUT ROM:\n");
    scanf("%d", &Phone[i].RAM);
    printf("INPUT YEAR OF MANUFACTURE:\n");
    scanf("%d", &Phone[i].YEAR_OF_MANUFACTURE);
    printf("INPUT THE PRICE:\n");
    scanf("%f", &Phone[i].price);

    }
}

void output_specs(struct phone Phone[10])
{
for(int i = 0; i < 10;i++){
    printf("\t\t\t\t(%d Phone Brand: %s\n ROM: %d\n RAM: %d \n YEAR OF MANUFACTURE: %d\n PRICE: %f\n)",i+1, Phone[i].brand, Phone[i].ROM,Phone[i].RAM,Phone[i].YEAR_OF_MANUFACTURE,Phone[i].price);
    }
}
