#include <stdio.h>
int main ()
    {
        int a,b,i,s;
        printf("A = ");
        scanf("%d",&a);
        printf("b = ");
        scanf("%d",&b);
        printf("A * B =");
        scanf("%d",&s);
        i = a * b;
        if (s == i)
            {
                printf("Correct");
            }
        else
            {
                printf("False %d * %d = %d",a,b,i);
            }
    }
