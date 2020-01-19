#include<stdio.h>

int main()
{
    int a,a1,a2,a3,rem;
    scanf("%d",&a);
    a1 = a/365;
    rem=a%365;
    if(rem==0)
    {
        printf("%d ano(s)\n",a/365);


    }



    else
        if(rem!=0)

    {
        a2=rem/30;

        if(rem==0)
            printf("%d ano(s)\n%d mes(es)",a/365,rem/30);

        else
            a3=rem%30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a/365,rem/30,rem%30);
    }
    return 0;
}
