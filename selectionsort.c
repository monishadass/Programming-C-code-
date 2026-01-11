#include<stdio.h>
void selectionsort(int a[],int n){
int i,j;int swap;
for(i=0;i<n-1;i++){
        int smallidx=i;
    for(j=i+1;j<n;j++){
        if(a[smallidx]>a[j]){
            smallidx=j;}
    }
            swap=a[i];
            a[i]=a[smallidx];
            a[smallidx]=swap;


}
for(i=0;i<n;i++){
    printf("%d",a[i]);
}

}

int main(){
int n=5;
int a[]={1,3,7,6,5};
selectionsort(a,n);



}

