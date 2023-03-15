#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int test=1;
	while(t--){
		int n,k,x;
		scanf("%d %d %d",&n,&k,&x);
		int a[n],b[k];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<k;i++) scanf("%d",&b[i]);
			printf("Test %d:\n",test);
		test++;
		for(int i=0;i<x;i++) printf("%d ",a[i]);
		for(int i=0;i<k;i++) printf("%d ",b[i]);
		for(int i=x;i<n;i++) printf("%d ",a[i]);
		printf("\n");
	}
}
