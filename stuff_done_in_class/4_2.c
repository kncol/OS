#include <stdio.h>

void main(){
    FILE *fptr;
    //Open a file in read mode
    fptr = fopen("hello.txt", "r");
    //Read the content and store it inside my string
    char myString[100];
    //Read the conent and store it inside myString
    while(fgets(myString, 100, fptr)){ 
        //Print the file content
        printf("%s", myString);
    }
    //Close the file
    fclose(fptr);
}