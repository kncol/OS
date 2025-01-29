#include <stdio.h>

int main(){
    printf("Give a Temp\n");
    int temp;
    scanf("%d", &temp);
    if (temp > 70 && temp < 85){
        printf("1");
        return 1;
    }
    else{
        printf("0");
        return 0;
    }
}