#include<stdio.h>
#include <stdlib.h>
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
            if (ch == "/")
            {
                ch = fgetc(fptr1);
                if(ch == "/")
                { 
                    while(ch != '\n')
                    {
                        ch = fgetc(fptr1);
                    }
                }
                else if(ch == "*")
                {
                    ch = fgetc(fptr1);
                    while (ch != "*")
                    {
                        ch = fgetc(fptr1);
                    }
                    
                }    
            }
            else
            {
                printf("%c", ch);
            }
            ch = fgetc(fptr1);
               
        }
    }
}