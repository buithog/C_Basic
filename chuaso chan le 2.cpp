#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n;
		scanf("%d",&n);
		int c=0,l=0;
		while(n>0){
			if((n%10) %2 == 0) c++;
			else l++;
			n/=10;
		}
		printf("%d %d\n",l,c);
	}
}
