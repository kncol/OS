#include <stdio.h>

int main(){
    // Decalre the file pointer
    FILE* filePointer;

    // Declare the variable for the data to be read from file
    char dataToBeread[50];
    
    // Open the exisiting file GfgTest.c using the fopen() in read mode using "r" attribute
    filePointer = fopen("gfgText.c", "r");

    // Check if this filePointer is nill
    // which mayube using "r"attribute
    if (filePointer == NULL){
        printf("GfgTest.c file failed to open.");
    }
    else{
        printf("The file is now opened.\n");

        while (fgets(dataToBeread, sizeof(dataToBeread), filePointer) != NULL){
            printf("%s\n", dataToBeread);
        }

        printf("\nNow resetting pointer (I need to make the buffer aka dataToBeRead\nlarger if i want to print all lines/ at least 150 bytes)\n");
        rewind(filePointer); // have to reset it in order to not miss beginning of file
        // because we add \0 after, the size has to be one les in order to not exceed array bounds
        size_t read = fread(dataToBeread, sizeof(char),sizeof(dataToBeread) -1 ,filePointer);

        dataToBeread[read] = '\0'; // Treats this as a string (null-terminated according to google)
        printf("\n%s\n", dataToBeread);

    }
    fclose(filePointer);
    printf("\nClosed");
    return 0;
}