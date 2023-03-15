#include<stdio.h>
int nt[1000005];
void sang(){
	for(int i=0;i<=1000000;i++) nt[i] =1;
	nt[0] =nt[1] =0;
	for(int i=2;i<1000;i++){
		if(nt[i]==1){
			for(int j=i*i;j<=1000000;j+=i) nt[j] =0;
		}
	}
}
int main(){
	sang();
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(nt[i] == 1) printf("%d\n",i);
	}
}
