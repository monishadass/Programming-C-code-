#include<stdio.h>
void removedup(char str[]){
int i=0;int len=0,j,k;
while(str[i]!='\0'){
    len++;

i++;
}
for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(str[i]==str[j]){
            for(k=j;k<len;k++){
                str[j]=str[k+1];
            }
            len--;
            j--;
        }

        }
}
i=0;
len=0;
//for(i=0; i<len; i++){
        printf("%s", str);
        while(str[i]!='\0'){
    len++;

i++;
}
printf("%d",len);
    //}

}
int main(){
char str[100];
gets(str);
removedup(str);



}
