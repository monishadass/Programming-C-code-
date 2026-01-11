
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);

if(number%2==0 || number%5==0){
    printf("%d",number);
}

else if(number%2==0 && number%5==0){
    printf("multiple of 2 and 5 both");
}
else{
    printf("not a multiple we want");
}

return 0;
}
