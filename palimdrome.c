#include<stdio.h>
void palindrome(char str[]){
int len=0;int i=0;
while(str[i]!='\0'){
    len++;
    i++;
}

int flag=0;
int j=0;
int right=len-1;
while(str[j]!='\0'){
    if(str[j]!=str[right]){
        flag=1;break;
    }
    j++;
    right--;
}
if(flag==0){
    printf(" pALINDROME");
}
else{
    printf(" not palin");
}

}
int main(){
char str[100];
gets(str);
palindrome(str);

return 0;
}
