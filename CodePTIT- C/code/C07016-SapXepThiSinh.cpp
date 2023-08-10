#include <stdio.h>
#include <string.h>

struct Student{
    int id;
    char name[100], date[100];
    float point1, point2, point3;
    float sum;
};
void input(struct Student *student)
{
    scanf("\n%[^\n]s", &student->name);
    scanf("%s", &student->date);
    scanf("%f%f%f", &student->point1, &student->point2, &student->point3);
    student->sum = student->point1 + student->point2 + student->point3;
}
int cmp(struct Student a,struct Student b)
{
    if(a.sum < b.sum)
        return 1;
    if (a.sum == b.sum)
        if (a.id > b.id)
            return 1;
    return 0;
}
void swap(struct Student a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (cmp(a[i], a[j]))
            {
                struct Student x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
}
void output(struct Student student)
{
    printf("%d %s %s %.1f\n", student.id, student.name, student.date, student.sum);
}
int main()
{
    int n; scanf("%d", &n);
    struct Student a[1000];
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        a[i].id =++id;
        input(&a[i]);
    }
    swap(a, n);
    for (int i = 0; i < n; i++)
        output(a[i]);
}