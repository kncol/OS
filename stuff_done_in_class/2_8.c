#include <stdio.h>
int main(){
	int num1, num2, num3;
    printf("Type first number: \n");
    scanf("%d", &num1);
    printf("Type first number: \n");
    scanf("%d", &num2);
    
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    num3 = *ptr1 + *ptr2;
    printf("%d", num3);
}