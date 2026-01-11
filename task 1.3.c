#include<stdio.h>
int main(){
    int first_num;

    float second_num;
    scanf("%d",&first_num);
    scanf("%f",&second_num);
    float add=first_num+second_num;
    float sub=first_num-second_num;
    printf("%.1f %.1f",add, sub );

return 0;
}
