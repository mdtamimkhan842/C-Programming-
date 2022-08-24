#include <stdio.h>
int main ()
{
    FILE *pt;
    pt= fopen ("text_file.txt", "r");

    int c;
    c= fgetc(pt);
    printf ("the char is: %c\n", c);

    char buff[100];
    fscanf (pt, "%s", buff);
    printf ("the data is: %s\n", buff);

        fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

        fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);
    fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);

     fgets(buff, 50, pt);
    printf ("the data is: %s\n", buff);


    fclose(pt);
    return  0;
}
