#include<stdio.h>
#include<string.h>

#define SUBJECTS 2

struct student
{
    char name[20];
    int roll_no;
    float marks[SUBJECTS];
}arr_student;

int main()
{

        int i, j;
        float sum = 0;
        
        printf("\nEnter details of student %d\n\n", i+1);

        printf("Enter name: ");
        scanf("%s", arr_student.name);

        printf("Enter roll no: ");
        scanf("%d", &arr_student.roll_no);

        for(j = 0; j < SUBJECTS; j++)
        {
            printf("Enter marks: ");
            scanf("%f", &arr_student.marks[j]);
        }
    printf("\n");

    printf("Name\tRoll no\tAverage\n\n");

     sum = 0;

        for(j = 0; j < SUBJECTS; j++)
        {
            sum += arr_student.marks[j];
        }
        printf("%s\t%d\t%.2f\n",
             arr_student.name, arr_student.roll_no, sum/SUBJECTS);



    return 0;
}