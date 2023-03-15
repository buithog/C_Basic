#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,dem=0;;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i-1] == a[i]) dem++;
		}
		printf("%d\n",dem);
	}
}
