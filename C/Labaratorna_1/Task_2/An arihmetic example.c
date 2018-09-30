#include <stdio.h>
#include <math.h>
int main ()
    {
    float y,f,x;
    const Pi;
    printf("Input Y : ");
    scanf("%f",&y);
    printf("Input X : ");
    scanf("%f",&x);
    y = y / Pi;
    x = x / Pi;
    f = ((5*tan(x))-(pow(tan(1/y),1/4)));
    printf ("F = %.2f",f);
    }
