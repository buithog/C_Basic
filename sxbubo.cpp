#include<stdio.h>
#include<stdbool.h>
void nhap(int a[], int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in(int a[], int n){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
void sapxep4(int a[], int n){
    int i,j,t,ok;
    for(i=0;i<n;i++){
        ok = true;
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                ok = false;
               int tmp=a[j];
               a[j]=a[j+1];
               a[j+1] =tmp;
            }
        }
        if(ok) break;
        printf("Buoc %d: ",i+1);
        in(a,n);
    }
}
main(){
    int a[100], n;
    scanf("%d",&n);
    nhap(a,n);
    sapxep4(a,n);
}
