#include <stdio.h>
void countDuplicate(int n, int a[]){
    int i, j, k;
    int count=0;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }
    printf("Number of duplicate element: %d\n", count);
    return 0;
}

void removeDuplicate(int n, int a[]){
     int i, j, k;
     for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]==a[j]){
                for(k=j; k<n; k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Modified array: {");
    for(i=0; i<n; i++){
        printf("%d", a[i]);
        if(i!=n-1){
            printf(", ");
        }
    }
    printf("}");
}

int main(){
    int n, i, j, k;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    countDuplicate(n, a);
    removeDuplicate(n, a);
    return 0;
}
