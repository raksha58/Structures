#include<stdio.h>
#include<string.h>

#define SUBJECTS 2

struct Student
{
    char name[20];
    int roll_no;
    float marks[SUBJECTS];
};

int main()
{
        
        int number,i,j;
        printf("Enter no of students:");
        scaf("%d", &number);
    
        struct Student arr_student[number];
        
        
        printf("\nEnter details of student %d\n\n",number+1);
    
       for(i=0;i<number;i++)
       {
          printf("Enter name: ");
          scanf("%s", arr_student[i].name);

          printf("Enter roll no: ");
          scanf("%d", &arr_student[i].roll_no);
 
          printf("Enter marks: ");
          for(j = 0; j < SUBJECTS; j++)
           {
              scanf("%f", &arr_student[i].marks[j]);
           }
        }     
    printf("\n");

    printf("\nDetails are as follow:\n");
      for(i=0;i<number;i++)
      {  
          float sum = 0;

          for(j = 0; j < SUBJECTS; j++)
           {
              sum += arr_student[i].marks[j];
           }
           printf("Name:%s\tRoll no:%d\tAverage:%.2f\n",
             arr_student[i].name, arr_student[i].roll_no, sum/SUBJECTS);
      }
    
    return 0;
}
