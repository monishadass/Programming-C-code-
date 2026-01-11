#include <stdio.h>

void displayDuplicate(int n, char a[], char b[], char c[]){
     int i, j, count=0;
     for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i]==b[j]){
                c[count]=a[i];
                count++;
            }
        }
    }
    printf("[");
    for(i=0; i<count; i++){
              if(i<count-1){
        printf("'%c',", c[i]);
              }
    else
            printf(" '%c' ",c[i]);
        }
        printf("]");

}

int main(){
    int n, i;
    scanf("%d", &n);
    char a[n];
    char b[n];
    char c[n];
    for(i=0; i<n; i++){
        scanf(" %c", &a[i]);
    }
    for(i=0; i<n; i++){
        scanf(" %c", &b[i]);
    }
    displayDuplicate(n, a, b, c);
}
