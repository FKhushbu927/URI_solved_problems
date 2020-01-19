#include<bits/stdc++.h>
using namespace std;
int main(){
     int c=0,m=0;
    float n,avg;
    float s=0;
    for(c=0;c<6;c++){

           scanf("%f",&n);
           if(n>0){
               s+=n;
               m++;

           }


    }
    avg=s/m;

    printf("%d valores positivos\n%.1f\n",m,avg);
    return 0;


}

