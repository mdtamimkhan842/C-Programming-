#include <stdio.h>

struct student
{
    int id;
    float cgpa;
    char name[20];
};
int main ()
{
    struct student s;
    printf ("enter the is is: \n");
    scanf ("%d",&s. id);
    printf ("enter the cgpa is: \n");
    scanf ("%f", &s.cgpa);
    printf ("enter the name is : \n");
    scanf ("%s", s.name);

    printf ("id: %d; cgpa: %f; name: %s\n", s.id, s.cgpa, s.name);

    return 0;
}
