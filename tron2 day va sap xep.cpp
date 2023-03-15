#include<stdio.h>
#include<stdlib.h>
int cmp1(const void *a, const void *b){
	int *x=(int *)a;
	int *y=(int *)b;
	return *x-*y;
}
int cmp2(const void *a, const void *b){
	int *x=(int *)a;
	int *y=(int *)b;
	return *y-*x;
}
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp1);
		qsort(b,n,sizeof(int),cmp2);
		printf("Test %d:\n",k);
		int index1=0;int index2=0, cnt=1;
		for(int i=0;i<n+n;i++){
			if(i %2 == 0 ) printf("%d ",a[index2++]);
			else printf("%d ",b[index1++]);
		//	cnt++;
		}
		printf("\n");
	}
}
