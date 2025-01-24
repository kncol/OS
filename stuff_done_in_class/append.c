#include <stdio.h>

void main(){
    FILE *fptr;
    //Open a file in append mode
    fptr = fopen("filename.txt", "a");

    //Write some text to the file
    fprintf(fptr, "\nHello All");

    //Close the file
    fclose(fptr);
}