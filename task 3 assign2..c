#include<stdio.h>
int main(){
    int num1,num2,result;
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        result=num1-num2;
        printf("%d",result);
    }
   else if(num2>num1){
    result=num2-num1;
    printf("%d",result);

   }
   else if(num1=num2){
    result=num1-num2;
    printf("%d",result);
   }


return 0;
}
