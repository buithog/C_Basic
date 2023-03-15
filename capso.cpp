#include<stdio.h>
int UCLN(int a, int b){
	if(b==0) return a;
	else return UCLN(b,a%b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,x,y;
		scanf("%d %d %d %d",&n,&k,&x,&y);
		if(UCLN(n,k) == UCLN(x,y)) printf("YES\n");
		else printf("NO\n");
	}
}
