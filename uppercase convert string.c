#include<stdio.h>
void upper(char str[]){
int i=0;int len=0;
while(str[i]!='\0'){
    len++;i++;

}
for(i=0;i<len;i++){
    if(str[i]>=97 && str[i]<=122){
        str[i]=str[i]-32;
    }

}
for(i=0; i<len; i++){
        printf("%c", str[i]);
    }

        //printf("%s", str);


}
int main(){
char str[100];
gets(str);
upper(str);



}

