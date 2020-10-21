#include <stdio.h>
#include <stdlib.h>
// Design a C program to receive strings from the keyboard and write them to a file.
int main()
{
    char sentence[1000];

    FILE *fptr;

    fptr = fopen("sample.txt", "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}