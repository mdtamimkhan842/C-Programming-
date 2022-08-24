#include<stdio.h>
int main()
{
    int H,M;
    float x,y;
    scanf("%d %d", &H , &M );//10 15// 60 500
    x = M/(float)5;
    if(x>H)
        {
            y = ((x-H)*30) - (M/(float)2);
            printf("%0.7f",y);
        }

            if(x<H)
        {
            y = ((x+12-H)*30) - (M/(float)2); //3+12-10*30-15/2, 5*30-7.5, 150-7.5, 142.5
            printf("%0.7f",y);
        }
        return 0;
}
