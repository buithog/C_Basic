#include<stdio.h>
#include<math.h>
int pt(int n){
	int tong=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			tong+=i;
			n/=i;
		}
	}
	if(n!=1) tong+=n;
	return tong;
}
int main(){
	int t,sum=0;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		sum+=pt(n);
	}
	printf("%d\n",sum);
}
