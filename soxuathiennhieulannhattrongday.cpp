#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],b[100005]={0};
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		int dem=0;
			for(int i=0;i<100005;i++){
			if(b[i] >dem) dem=b[i];
		}
		for(int i=0;i<n;i++){
			if(b[a[i]] == dem ) {
			printf("%d ",a[i]);
			b[a[i]] =0;
			}
		}
		printf("\n");
	}
}
