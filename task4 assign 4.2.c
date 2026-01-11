
#include <stdio.h>
void uniqueElement(int size1, int size2, int a1[], int a2[], int a3[]){
    int index=0, i, j;
    for(i=0; i<size1; i++){
        int match=0;
        for(j=0; j<index; j++){
            if(a1[i]==a3[j]){
                match++;
                break;
            }
        }
        if(match==0){
            a3[index]=a1[i];
            index++;
        }
    }

    for(i=0; i<size2; i++){
        int match=0;
        for(j=0; j<index; j++){
            if(a2[i]==a3[j]){
                match++;
                break;
            }
        }
        if(match==0){
            a3[index]=a2[i];
            index++;
        }
    }
    for(i=0; i<index; i++){
        printf("%d ", a3[i]);
    }
}
int main(){
    int a1[] = {1, 2, 2, 4, 5, 5, 7, 99, 200, 303, 70};
    int a2[] = {1, 1, 2, 3, 3, 3, 4, 5, 200, 500, -5};
    int size1 = sizeof(a1)/sizeof(a1[0]);
    int size2 = sizeof(a2)/sizeof(a2[0]);
    int a3[size1+size2];
    uniqueElement(size1, size2, a1, a2, a3);
}
