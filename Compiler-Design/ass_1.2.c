#include <stdio.h>
#include <stdlib.h>
// Design a C program to copy contents of a one file to other and also print on console.
int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c, ch;

    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);

    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    else
    {
        ch = fgetc(fptr1);
        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fptr1);
        }
    }
    printf("\nEnter the filename to open for writing \n");
    scanf("%s", filename);

    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("\nCannot open file %s \n", filename);
        exit(0);
    }

    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("\nContents copied to %s \n", filename);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}