#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int nt(int n){
	if(n==1) return 0;
	if(n==2) return 1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i == 0) return 0;
	}
	return 1;
}
int dem(int n,int a[],int x){
	int dem =0;
	for(int i=0;i<n;i++){
		if(a[i] == x) dem++;
	}
	return dem;
}
void sapxep(int a[], int n){
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
    }
}
int main(){
	int t;int test=1;
	scanf("%d",&t);
	while(t--){
		printf("Test %d:\n",test);
		test++;
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		sapxep(a,n);
		for(int i=0;i<n;i++){
			if(a[i] != a[i-1] && nt(a[i]))
			printf("%d xuat hien %d lan\n",a[i],dem(n,a,a[i]));
		}
	}
}
