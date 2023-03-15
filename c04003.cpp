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
		int l=0,r=n-1,ok=1;
		while(l<r){
			if(a[l] != a[r]) ok=0;
		l++;r--;
		}
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}
