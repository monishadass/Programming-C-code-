#include<stdio.h>
int main(){
   int A,B,C;
   float D;
   scanf("%d %d %d",&A,&B,&C);
   scanf("%f",&D);
    int power=pow(A,C);
     int result=power+(2*B)*(A/2)-D/3;
    printf("%d\n",result);

return 0;
}
