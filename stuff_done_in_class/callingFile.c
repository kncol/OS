#include <stdio.h>

void main(){
    FILE *fptr;
    //Open a file writing mode
    fptr = fopen("filename.txt", "w");

    //Write some text to the file
    fprintf(fptr, "Some text");

    //Close the file
    fclose(fptr);
}