#include <stdio.h>

void main(){
    FILE *fptr;
    //Open a file in read mode
    fptr = fopen("filename.txt", "r");
    //Read the content and store it inside my string
    char myString[100];
    //Read the conent and store it inside myString
    fgets(myString, 100, fptr);
    //Print the file content
    printf("%s", myString);
    //Close the file
    fclose(fptr);
}