#include<stdio.h>
int main()
{
    int employee_number,hours;
    float amount,salary;


    scanf("%d",&employee_number);
    scanf("%d",&hours);
    scanf("%f",&amount);

     salary = hours*amount;

    printf("NUMBER = %d\n",employee_number);
    printf("SALARY = U$ %.2f",(hours*amount));
    printf("\n");
    return 0;
}

