
#include<stdio.h>
void removedup(char str[]){
int i=0;int len=0,j,k;
while(str[i]!='\0'){
    len++;i++;

}
int flag=0;
for(i=0;i<len;i++){
    if(str[i]!='1' && str[i]!='0'){
        flag=1;
        break;

    }

}
    if(flag==0){
        printf("ninary");

    }
    else{
        printf("not");
    }

}
int main(){
char str[100];
gets(str);
removedup(str);



}
