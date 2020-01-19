#include<stdio.h>
int main()
{
    //int N,HOUR,MIN,SEC;
    //scanf("%d",&N);
    //HOUR = N/3600;
    //MIN = N/60;
   // SEC = N%60;
   // printf("%d:%d:%d",N/3600,N/60,N%60);

   int n,hour;
   hour = n/3600;
   scanf("%d",&n);
   if(n%3600==0)
      {
          printf("%d",n/3600);

       }

      else
        if(0<n%3600<60)
      {
         printf("%d:%d:",n/3600,n%3600);
      }

    printf("\n");
    return 0;
}
