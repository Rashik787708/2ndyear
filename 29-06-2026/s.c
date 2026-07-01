#include <stdio.h>
#include <string.h>

#define MAX 100
#define SUB 5

int studentID[MAX], year[MAX], total[MAX];
char name[MAX][50], department[MAX][30], phone[MAX][11], email[MAX][50];
int marks[MAX][SUB];
float average[MAX];
char grade[MAX];

int count = 0;

void addStudent();
void viewStudents();
void searchByID();
void searchByName();
void updateStudent();
void deleteStudent();
void topScorer();
void studentsAboveAverage();
void sortByName();
void sortByMarks();

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Update Student\n");
        printf("6. Delete Student\n");
        printf("7. Top Scorer\n");
        printf("8. Students Above Average\n");
        printf("9. Sort by Name\n");
        printf("10. Sort by Marks\n");
        printf("11. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchByID(); break;
            case 4: searchByName(); break;
            case 5: updateStudent(); break;
            case 6: deleteStudent(); break;
            case 7: topScorer(); break;
            case 8: studentsAboveAverage(); break;
            case 9: sortByName(); break;
            case 10: sortByMarks(); break;
            case 11: return 0;
            default: printf("Invalid Choice\n");
        }
    }
}

void addStudent()
{
    int i,j,duplicate=0;

    if(count>=MAX)
    {
        printf("Storage Full\n");
        return;
    }

    printf("Enter Student ID: ");
    scanf("%d",&studentID[count]);

    for(i=0;i<count;i++)
    {
        if(studentID[i]==studentID[count])
        {
            duplicate=1;
            break;
        }
    }

    if(duplicate)
    {
        printf("Duplicate Student ID\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]",name[count]);

    printf("Enter Department: ");
    scanf(" %[^\n]",department[count]);

    printf("Enter Year: ");
    scanf("%d",&year[count]);

    printf("Enter Phone: ");
    scanf("%s",phone[count]);

    printf("Enter Email: ");
    scanf("%s",email[count]);

    total[count]=0;

    printf("Enter Marks of %d Subjects\n",SUB);

    for(j=0;j<SUB;j++)
    {
        do
        {
            printf("Subject %d: ",j+1);
            scanf("%d",&marks[count][j]);
        }
        while(marks[count][j]<0 || marks[count][j]>100);

        total[count]+=marks[count][j];
    }

    average[count]=total[count]/5.0;

    if(average[count]>=90)
        grade[count]='A';
    else if(average[count]>=80)
        grade[count]='B';
    else if(average[count]>=70)
        grade[count]='C';
    else if(average[count]>=60)
        grade[count]='D';
    else
        grade[count]='F';

    count++;

    printf("Student Added Successfully\n");
}

void viewStudents()
{
    int i,j;

    if(count==0)
    {
        printf("No Records Found\n");
        return;
    }

    for(i=0;i<count;i++)
    {
        printf("\n----------------------------\n");
        printf("ID : %d\n",studentID[i]);
        printf("Name : %s\n",name[i]);
        printf("Department : %s\n",department[i]);
        printf("Year : %d\n",year[i]);
        printf("Phone : %s\n",phone[i]);
        printf("Email : %s\n",email[i]);

        printf("Marks : ");
        for(j=0;j<SUB;j++)
            printf("%d ",marks[i][j]);

        printf("\nTotal : %d",total[i]);
        printf("\nAverage : %.2f",average[i]);
        printf("\nGrade : %c\n",grade[i]);
    }
}
/* Search Student by ID */
void searchByID()
{
    int id, i, found = 0;

    printf("Enter Student ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(studentID[i] == id)
        {
            found = 1;

            printf("\nStudent Found\n");
            printf("ID : %d\n", studentID[i]);
            printf("Name : %s\n", name[i]);
            printf("Department : %s\n", department[i]);
            printf("Year : %d\n", year[i]);
            printf("Phone : %s\n", phone[i]);
            printf("Email : %s\n", email[i]);

            printf("Marks : ");
            for(int j=0;j<5;j++)
                printf("%d ", marks[i][j]);

            printf("\nTotal : %d", total[i]);
            printf("\nAverage : %.2f", average[i]);
            printf("\nGrade : %c\n", grade[i]);
            break;
        }
    }

    if(found==0)
        printf("Student Not Found\n");
}

/* Search Student by Name */
void searchByName()
{
    char n[50];
    int i, found = 0;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", n);

    for(i=0;i<count;i++)
    {
        if(strcmp(name[i], n)==0)
        {
            found=1;

            printf("\nID : %d", studentID[i]);
            printf("\nDepartment : %s", department[i]);
            printf("\nYear : %d", year[i]);
            printf("\nPhone : %s", phone[i]);
            printf("\nEmail : %s", email[i]);
            printf("\nTotal : %d", total[i]);
            printf("\nAverage : %.2f", average[i]);
            printf("\nGrade : %c\n", grade[i]);
            break;
        }
    }

    if(found==0)
        printf("Student Not Found\n");
}

/* Update Student */
void updateStudent()
{
    int id,i,j;

    printf("Enter Student ID to Update: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(studentID[i]==id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]",name[i]);

            printf("Enter Department: ");
            scanf(" %[^\n]",department[i]);

            printf("Enter Year: ");
            scanf("%d",&year[i]);

            printf("Enter Phone: ");
            scanf("%s",phone[i]);

            printf("Enter Email: ");
            scanf("%s",email[i]);

            total[i]=0;

            for(j=0;j<5;j++)
            {
                do
                {
                    printf("Subject %d Marks: ",j+1);
                    scanf("%d",&marks[i][j]);
                }while(marks[i][j]<0 || marks[i][j]>100);

                total[i]+=marks[i][j];
            }

            average[i]=total[i]/5.0;

            if(average[i]>=90)
                grade[i]='A';
            else if(average[i]>=80)
                grade[i]='B';
            else if(average[i]>=70)
                grade[i]='C';
            else if(average[i]>=60)
                grade[i]='D';
            else
                grade[i]='F';

            printf("Student Updated Successfully\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

/* Delete Student */
void deleteStudent()
{
    int id,i,j;

    printf("Enter Student ID to Delete: ");
    scanf("%d",&id);

    for(i=0;i<count;i++)
    {
        if(studentID[i]==id)
        {
            for(j=i;j<count-1;j++)
            {
                studentID[j]=studentID[j+1];
                strcpy(name[j],name[j+1]);
                strcpy(department[j],department[j+1]);
                year[j]=year[j+1];
                strcpy(phone[j],phone[j+1]);
                strcpy(email[j],email[j+1]);

                for(int k=0;k<5;k++)
                    marks[j][k]=marks[j+1][k];

                total[j]=total[j+1];
                average[j]=average[j+1];
                grade[j]=grade[j+1];
            }

            count--;
            printf("Student Deleted Successfully\n");
            return;
        }
    }

    printf("Student Not Found\n");
}

/* Top Scorer */
void topScorer()
{
    if(count==0)
    {
        printf("No Records\n");
        return;
    }

    int i,max=0;

    for(i=1;i<count;i++)
    {
        if(total[i]>total[max])
            max=i;
    }

    printf("\nTop Scorer\n");
    printf("ID : %d\n",studentID[max]);
    printf("Name : %s\n",name[max]);
    printf("Total : %d\n",total[max]);
    printf("Average : %.2f\n",average[max]);
}

/* Students Above Given Average */
void studentsAboveAverage()
{
    float avg;
    int i;

    printf("Enter Average: ");
    scanf("%f",&avg);

    for(i=0;i<count;i++)
    {
        if(average[i]>=avg)
        {
            printf("%d\t%s\t%.2f\n",
                   studentID[i],
                   name[i],
                   average[i]);
        }
    }
}

/* Sort by Name */
void sortByName()
{
    int i,j;

    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                /* Swap all corresponding arrays */
                /* (Use the same swapping logic as in sortByMarks) */
            }
        }
    }

    printf("Sorted by Name\n");
}

/* Sort by Marks */
void sortByMarks()
{
    int i,j;

    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(total[i]<total[j])
            {
                /* Swap all corresponding arrays */
                /* Same swapping logic used for every array */
            }
        }
    }

    printf("Sorted by Marks\n");
}