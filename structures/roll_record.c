//Write a C program to maintain records on N students using an array of structures with four fields (roll no,name,marks and grade).
//Assume proper data types for each field input.Print the student’s details given the roll no as an input.

#include <stdio.h>
struct students
{
    int roll;
    char name[30];
    float marks;
    char grade;
};
int main()
{
    int n, i, catch,temp,flag=0;
    printf("Enter N : ");
    scanf("%d", &n);
    struct students s[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter roll for record %d :", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter name for record %d :", i + 1);
        scanf("%s", &s[i].name);
        printf("Enter marks for record %d :", i + 1);
        scanf("%f", &s[i].marks);
        getchar(); // to catch enter as input
        printf("Enter grade for record %d :", i + 1);
        scanf("%c", &s[i].grade);
    }
    printf("\nEnter roll to fetch : ");
    scanf("%d", &catch);

    for (i = 0; i < n; i++)
    {
        if (s[i].roll == catch)
        {
            printf("Roll = %d", s[i].roll);
            printf("\nName = %s", s[i].name);
            printf("\nMarks = %f", s[i].marks);
            printf("\nGrade = %c", s[i].grade);
            flag++;
            break;
        }

    }
    if(flag==0){
        printf("NO RECORD FOUND");
    }
    //bubble sort
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(s[j].roll>s[j+1].roll){
                struct students temp1=s[j];
                s[j]=s[j+1];
                s[j+1]=temp1;
            }
        }
    }

    printf("\n----LIST OF RECORDS----\n\n");
    printf("        Roll        |           Name           |        Marks          |        Grade          |\n");
    for (i = 0; i < n; i++)
    {   
        printf("        %d         |        %s         |        %f         |        %c         |", s[i].roll, s[i].name, s[i].marks, s[i].grade);printf("\n");
    }
}
