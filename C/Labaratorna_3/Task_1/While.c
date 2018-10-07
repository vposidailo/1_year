#include <stdio.h>
#include <math.h>
int main()
    {
        float x,a,e,k,s,Element;
        unsigned long long int Factorial;
        int Number;
        float m;
        printf("Input Number = ");
        scanf("%d",&Number);
        k=Number+1;
        Factorial = 1;
        while(Number != 1)
            {
                Factorial = Factorial * Number;
                Number -= 1;
            }
        printf("Input X : ");
        scanf("%f",&x);
        printf("Input A : ");
        scanf("%f",&a);
        printf("Input e : ");
        scanf("%f",&e);
        s = 0;
        m = 1;
        Element = 0;
        if (x == 0 || a == 0 || e <= 0)
            {
                printf("Error \n");
            }
        else
            {
                s=(pow(a+x,-k))/(pow(a,2*k)+Factorial);
                while (s<e)
                    {
                        Element = (pow(a+x,-k))/(pow(a,2*k)+Factorial);
                        s+=Element;
                        k+=1;
                        m+=1;
                        printf("%.20f %.20f %.20f \n", s, k, m );
                        printf("%f \n",Element);
                        printf("Suma = %f \n",s);
                        printf("Amount of Elements = %d \n",m);
                    }
            }
    }
