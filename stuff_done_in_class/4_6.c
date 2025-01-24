#include <stdio.h>
#include <stdlib.h>
void main(){

    int *grades;
    int students;
    FILE *fptr;

    printf("Type number of students: \n");
    scanf("%d", &students);

    grades = calloc(students, sizeof(*grades));
    
    // Open a file in writing mode
    fptr = fopen("gradeMem.txt", "w");

    for (int i = 0; i < students; i++)
    {
        printf("Set Score for student %d\n", i + 1);
        scanf("%d", &grades[i]);
    }
    

    for (int i = students - 1; i >= 0; i--)
    {
        fprintf(fptr, "Student %d  has a %d\n",i+1, grades[i]);

    }
    fclose(fptr);
    free(grades);
}