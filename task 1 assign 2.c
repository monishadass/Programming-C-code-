#include<stdio.h>
int main(){
int hours,salary;
scanf("%d",&hours);
if(hours<0){
    printf("hour can not be negative");
    }
   else if(hours<=40){

salary=hours*200;
printf("%d\n",salary);
}
else if(hours>=168){
    printf("impossible to work more than 168 hours weekly");
}
else if (hours>=40){
salary=8000+(hours-40)*300;
printf("%d",salary);
}

return 0;
}
