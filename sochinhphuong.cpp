#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int m=sqrt(n);
		if(m*m == n) printf("%s\n","YES");
		else printf("%s\n","NO");
	}
}
