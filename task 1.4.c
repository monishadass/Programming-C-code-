#include<stdio.h>
int main(){
int first_num, second_num;
printf("Number 1: ");
scanf("%d",&first_num);
printf("Number 2: ");
scanf("%d",&second_num);
first_num=first_num+second_num;
second_num=first_num-second_num;
first_num=first_num-second_num;
printf("Number 1: %d\n",first_num);
printf("Number 2: %d",second_num);
return 0;
}
