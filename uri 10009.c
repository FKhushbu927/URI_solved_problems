#include<stdio.h>
int main()

{

    char Employee;
    double SALARY,SOLD,TOTAL_SALARY;

     scanf("%s %lf %lf",&Employee,&SALARY,&SOLD);


    TOTAL_SALARY=SALARY+(SOLD*15)/100;


     printf("TOTAL = R$ %.2f\n",TOTAL_SALARY);

     return 0;


}
