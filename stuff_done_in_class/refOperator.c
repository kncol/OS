#include <stdio.h>

void main(){
    int myAge = 43;
    int* ptr = &myAge; // a pointer variable / pointer declaration
    printf("%d\n", myAge);
    printf("%p\n", &myAge); // outputs the mem address of myAge
    printf("%p\n", ptr); // reference: output the mem address of myAge with the pointer (0x7ff...)
    printf("%d\n", *ptr); // dereferene: output th evalue of myAge with the pointer (43)

    printf("Test: %ld \n",sizeof(myAge));
    printf("Test: %ld \n",sizeof(ptr));
}