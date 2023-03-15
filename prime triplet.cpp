#include<stdio.h>
#include<math.h>
int nt[1000005];
void sang(){
	for(int i=0;i<1000005;i++) nt[i]=1;
	nt[0]=nt[1]=0;
	for(int i=2;i<1000;i++){
		if(nt[i]){
			for(int j=i*i;j<1000005;j+=i){
				nt[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while(t--){
		int n,dem=0;
		scanf("%d",&n);
		for(int i=2;i<=n-6;i++){
			if(nt[i] == 1 && nt[i+2] == 1 && nt[i+6] == 1) dem++;
			if(nt[i] == 1  && nt[i+4] ==1 && nt[i+6] == 1) dem++;
		}
		printf("%d\n",dem);
	}
}
