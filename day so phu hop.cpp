#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int b[n],a[n];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		int ok=1;
		for(int i=0;i<n;i++){
			if(b[i]<a[i]) {
				ok=0;
				break;
			}
		}
		if(ok) printf("yes\n");
		else printf("NO\n");
	}
}
