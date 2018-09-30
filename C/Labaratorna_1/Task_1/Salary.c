#include <stdio.h>
int main(){
    int salary;
    int tax;
    printf("Salary =");
    scanf("%d",&salary);
    printf("Tax%%=");
    scanf("%d",&tax);
    tax=salary*tax/100;
    salary-=tax;
    printf("Income =%d",salary);
return 0;
}
