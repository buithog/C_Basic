#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int dem=0,res=1;
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		dem=a[0];
		for(int i=1;i<n;i++){
			if(a[i] >= dem){
			res++;
			dem=a[i];
			}
		}
		printf("%d\n",res);
	}
}
