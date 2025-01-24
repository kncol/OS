#include <stdio.h>
#include <string.h>

int main(){
    // Delcare the file pointer
    FILE* filePointer;

    //Get the data to be written in file
    char dataToBeWritten[50] = "GeeksforGeeks-A Computer "
                            "Science Portal for Geeks";
    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attibute
    filePointer = fopen("gfgText.c", "w");

    // Check if this filePointers is null
    // which maybe if the file does not exist
    if (filePointer == NULL){
        printf("GfgTest.c file failed to open");
    }
    else{
        printf("The file is now  opened.\n");
        // Write the dataToBeWritten into the file
        if(strlen(dataToBeWritten) > 0){
            // first example
            fprintf(filePointer, "%s\n", dataToBeWritten);

            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);

            fwrite(dataToBeWritten, sizeof(char), strlen(dataToBeWritten), filePointer);
        }
    }
    fclose(filePointer);


}