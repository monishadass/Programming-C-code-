#include<stdio.h>
int main(){
    int hours,second,minutes,remaining_second;
    scanf("%d",&second);

    hours=second/3600;
   remaining_second=second%3600;
    minutes=remaining_second/60;
    remaining_second=remaining_second%60;
    printf(" hours: %d\n minutes: %d\n seconds: %d",hours,minutes,remaining_second);




return 0;
}
