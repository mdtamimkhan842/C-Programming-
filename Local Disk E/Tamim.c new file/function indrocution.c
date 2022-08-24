#include <stdio.h>

    int get_sum (int x, int y)
    {
        int sum = x+y;
        return sum;
    }

    void say_hi ()
    {
        printf ("Hi\n");
    }

    int main ()
    {
        printf ("Main start\n");
        say_hi();
        int result = get_sum(255, 555);
        printf ("my result is: %d\n", result);
        return 0;
    }

