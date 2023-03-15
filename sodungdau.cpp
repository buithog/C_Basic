#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n-1;i++){
			int ok=0;
			for(int j=i+1;j<n;j++){
				if(a[i] <= a[j]){
				ok=0;
				break;
				}
				else ok=1;
			}
			if(ok)
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	}
}
