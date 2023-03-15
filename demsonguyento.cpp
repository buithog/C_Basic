#include<stdio.h>
int nt[1000005];
void sang(){
	for(int i=0;i<=1000000;i++) nt[i] = 1;
	nt[0] =nt[1] =0;
	for(int i=2;i<10000;i++){
		if(nt[i] == 1){
			for(int j=i*i;j<=1000000;j+=i) nt[j] = 0;
		}
	}
}
int check(int n){
	while(n>0){
		int x=n%10;
		if(!nt[x]) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,dem=0;
		scanf("%d %d",&n,&k);
		for(int i=n;i<=k;i++){
			if(nt[i] && check(i)) dem++;
		}
		printf("%d\n",dem); 
	}
}
