#include <stdio.h>

void main(){   
    int myNumbers[4] = {25,50,75,100};
    // Get the mem address of the myNumbers array
    printf("%p\n", myNumbers);
    // Get the mem address of the first array element
    printf("%p\n", &myNumbers[0]);
    // print the second element using pointer
    printf("%d\n", *(myNumbers + 1));

    // Loop to get all elements
    int length = sizeof(myNumbers)/ sizeof(myNumbers[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", *(myNumbers + i)); //pointer
        printf("%d\n", myNumbers[i]);//array index
    }
    
}