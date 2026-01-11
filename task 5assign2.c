
#include<stdio.h>
int main(){
    int hour;
    scanf("%d",&hour);
  if(hour>=4  && hour<=6){
    printf("Breakfast");
  }
  else if(hour>=12 && hour<=13){
    printf("Lunch");
  }
  else if(hour>=16 && hour<=17){
    printf("Snacks");
  }
  else if(hour>=19 && hour<=20){
    printf("Dinner");
  }
  else if(hour>=0 && hour<=23){
        printf("Patience is a virtue");
    }

else if (hour<0 || hour>23){
    printf(" Wrong time");
}


return 0;
}
