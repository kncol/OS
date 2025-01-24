#include <stdio.h>

void main(){
    FILE *fptr;
    //Open a file writing mode
    fptr = fopen("hello.txt", "w");

    //Write some text to the file
    fprintf(fptr, "Hello,\nHow are you? \nMy name is Kennedy \nWhat's your name?");

    //Close the file
    fclose(fptr);
}