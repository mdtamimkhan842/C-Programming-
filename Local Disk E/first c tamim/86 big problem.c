#include <stdio.h>

float add (float a, float b)
{
    return a+b;
}


float subtract(float a, float b)
{
    return a-b;
}

float multiply (float a, float b)
{
    return a*b;
}

float divide (float a, float b)
{
    return a/b;
}


int main ()
{
    float a,b;
    printf ("enter the values of a and b: \n");
    scanf ("%f%f", &a,&b);

    float add_result = add (a,b);
    float subtract_result = subtract (a,b);
    float multiply_result = multiply (a,b);
    float divide_result = divide (a,b);

    printf ("Add: %f, Subtract: %f, Multiply: %f, Divide: %f\n", add_result, subtract_result, multiply_result, divide_result);

    //printf ("Add: %f\n", add_result);
    //printf (" subtract: %f\n", subtract_result);
    //printf ("multiply: %f\n", multiply_result);
    //printf ("divide: %f\n", divide_result);

    return 0;

}
