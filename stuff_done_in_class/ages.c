#include <stdio.h>

void main(){
    float ages[] = {20,22,18,35,48,26,87,70};
    int i;
    float sum;
    float length = sizeof(ages) / sizeof(ages[0]);
    for (i = 0; i < length; i++)
    {
        sum += ages[i];
    }
    printf("Average Age: %f\n", sum / length);
    int min = 200;
    for (i = 0; i < length; i++)
    {   
        if (min > ages[i]){
            min = ages[i];
        }
    }
    printf("Loweset Age: %d", min);
    

}