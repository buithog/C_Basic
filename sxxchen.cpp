#include<stdio.h>
void nhap(int a[], int n){
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
}
void in(int a[], int n){
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}
void sapxep3(int a[], int n){
    int i,j,x;
    printf("Buoc 0: %d",a[0]);
    printf("\n");
    for(i=1;i<n;i++){
        x = a[i]; j = i-1;
        while(j>=0 && a[j]>x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
        printf("Buoc %d: ",i);
        in(a,i+1);
    }
}
main(){
    int a[100], n;
    scanf("%d",&n);
    nhap(a,n);
    sapxep3(a,n);
}
