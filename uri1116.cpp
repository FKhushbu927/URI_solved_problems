#include<bits/stdc++.h>
int main(){
    int n,x,y,rem,res;
    scanf("%d",&n);

    scanf("%d%d",&x,&y);
    while(n--){
                 rem=x%y;
                 res=x/y;
            if(rem!=0){
                printf("divisao impossivel");
            }
            else{
                    printf("\n",res);

            }

    }


}
