// PROGRAM TO READ NAME AND MARKS OF N NUMBER OF STUDENTS FROM
// AND STORE THEM IN A FILE. IF THE FILE PREVIOUSLY EXITS, ADD THE
// INFORMATION TO THE FILE.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char name[50];
    int marks,i,n;
    time_t t;
    time(&t);
    printf("Date : %s",ctime(&t));
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr=(fopen("student.txt","a"));
    if(fptr==NULL) {
        printf("Error!");
        exit(1);
    }
    fprintf(fptr,"\n\nEdited: %s\n Name: Shashank-Mathur-18EJICS159 \n\n",ctime(&t));
    for (i=0;i<n;++i) {
        printf("For student%d\nEnter name: ",i+1);
        scanf("%s",name);
        printf("Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
    }
    fclose(fptr);
    return 0;
}