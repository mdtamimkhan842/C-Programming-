#include <stdio.h>
struct student{
int id;
float cgpa;
char name[20];
};
int main ()
{
    struct student s;
    printf ("enter your id: ");
    scanf ("%d", &s. id);
    printf ("enter your cgpa:");
    scanf ("%f", &s. cgpa);
    printf ("enter your name:");
    scanf ("%s", s. name);

    printf ("name: %s; cgpa: %f; id: %d", s.name, s.cgpa,s.id);


return 0;
}
