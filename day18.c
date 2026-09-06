#include <stdio.h>
struct Student
{
    char name[50];
    int roll_no;
    float marks;
};
void display(struct Student s)
{
    printf("\nName: %s", s.name);
    printf("\nRoll Number: %d", s.roll_no);
    printf("\nMarks: %.2f", s.marks);
}
void sort_students(struct Student students[], int n)
{
    struct Student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:", i + 1);
        printf("\nName: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    sort_students(students, n);
    printf("\nStudents sorted by marks (highest to lowest):");
    for (int i = 0; i < n; i++)
    {
        display(students[i]);
    }
    return 0;
}