#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float Ax,Ay;
    float Bx,By;
    float Cx,Cy;
    float Perimeter,Area;
    printf("Input Abs and Ord (A) = ");//Вводимо Координати першої точки
    scanf("%f %f",&Ax,&Ay);
    printf("Input Abs and Ord (B) = ");//Вводимо Координати другої точки
    scanf("%f %f",&Bx,&By);
    printf("Input Abs and Ord (C) = ");//Вводимо Координати третьої точки
    scanf("%f %f",&Cx,&Cy);
    if (Ay <= 2  && By <= 2 && Cy <= 2 && Ax <= 6 && Bx <= 6 && Cx <= 6 && Ax >= 0 && Bx >= 0 && Cx >= 0 && Ay >= 0 && By >= 0 && Cy >= 0 && (Ax*Ay) <= 4 && (Bx*By) <= 4 && (Cx*Cy) <= 4 && sqrt(2*Ax) >= Ay && sqrt(2*Bx) >= By && sqrt(2*Cx) >= Cy && (Cx-Ax)/(Bx-Ax)!=(Cy-Ay)/(By-Ay))
    {
    Area = 0.5 * (((Ax * By) + (Bx * Cy) + (Cx * Ay)) - ((Ay * Bx) + (By * Cx) + (Cy * Ax)));
    if (Area < 0) Area *= (-1);
    printf("Area = %.2f ",Area);
    Perimeter = sqrt(abs(pow(Ax - Bx, 2)) + abs(pow(Ay - By, 2)))+ sqrt(abs(pow(Bx - Cx, 2)) + abs(pow(By - Cy, 2))) + sqrt(abs(pow(Cx - Ax, 2))+abs(pow(Cy - Ay, 2)));
    printf("Perimeter = %.2f \n",Perimeter);
    }
    else
    {
    printf("Dot's are not in the area");
    //if  (Ax > 6 && Bx > 6 && Cx > 6 )
    //{
    //printf("Abs one of dot's are bigger then we need \n");
    //if  (Ax < 0 && Bx < 0 && Cx < 0 )
    //{
    //printf("Abs one of dot's are smaller then we need \n");
    //if  (Ay < 0 && By < 0 && Cy < 0 )
    //{
   // printf("Ord one of dot's are smaller then we need \n");
   // if ((Ax*Ay) > 4 && (Bx*By) > 4 && (Cx*Cy) > 4 )
    //{
    //printf("One of products (Abs * Ord) aren't correct \n");
    //if  (sqrt(2*Ax) < Ay && sqrt(2*Bx) < By && sqrt(2*Cx) < Cy );
    //{
    //printf("One of root isn't correct \n");
    //if  (((Cx-Ax)/(Bx-Ax)==(Cy-Ay)/(By-Ay)) && Ay > 2  && By > 2 && Cy > 2);
    //{
    //printf("Dot's lie on one straight line \n");
    }
    //}
    //}
    //}
    //}
    //}
    //}
    return 0;
}


