#include <stdio.h>

void main(){
    double theDouble = 101.4;
    int theInt = 50;
    char theChar = 'd';
    double* ptr1 = &theDouble;
    int* ptr2 = &theInt; // a pointer variable / pointer declaration
    char* ptr3 = &theChar;
    printf("Double Value: %f\n", theDouble); // the value
    printf("Double Address: %p\n", &theDouble); // the address
    printf("Double Byte Size: %ld\n", sizeof(theDouble)); // the memory size (in bytes)

    printf("Int Value: %d\n", theInt); // the value
    printf("Int Address: %p\n", &theInt); // the address
    printf("Int Byte Size: %ld\n", sizeof(theInt)); // the memory size (in bytes)

    printf("Char Value: %c\n", theChar); // the value
    printf("Char Address: %p\n", &theChar); // the address
    printf("Char Byte Size: %ld\n", sizeof(theChar)); // the memory size (in bytes)


    printf("Double Pointer Value: %p\n", ptr1); // the value
    printf("Double Pointer Address: %f\n", *ptr1); // the address
    printf("Double Pointer Byte Size: %ld\n", sizeof(ptr1)); // the memory size (in bytes)

    printf("Int Pointer Value: %p\n", ptr2); // the value
    printf("Int Pointer Address: %d\n", *ptr2); // the address
    printf("Int Pointer Byte Size: %ld\n", sizeof(ptr2)); // the memory size (in bytes)

    printf("Char Pointer Value: %p\n", ptr3); // the value
    printf("Char Pointer Address: %c\n", *ptr3); // the address
    printf("Char Pointer Byte Size: %ld\n", sizeof(ptr3)); // the memory size (in bytes)
}