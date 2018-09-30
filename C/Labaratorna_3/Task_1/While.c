#include <stdio.h>
#include <math.h>
int main()
    {
    float x,a,e,k,s,Element;
    int i ;
    printf("Input X : ");
    scanf("%f",&x);
    printf("Input A : ");
    scanf("%f",&a);
    printf("Input e : ");
    scanf("%f",&e);
    k = 0;
    i = 1;
    s = 0;
    if (x == 0 && a == 0 && e <= 0);
        {
        printf("Error");
        }
    else()
        {
        Element = (pow(a+x,-k))/pow(a,2*k)+k!;
        while (Element<e);
        s=s+Element;
        i=i+1;
        k=k+1;
        }
}
