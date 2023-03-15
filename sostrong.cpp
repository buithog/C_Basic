#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i=0,res=n;
	while(n>0){
		a[i]=n%10;
		n/=10;
		i++;
	}
	int sum=0;
	for(int j=0;j<=i;j++){
		int s=1;
		for(int k=2;k<=a[j];k++){
			s*=k;
		}
		sum+=s;
	}
	if(sum==res) printf("1");
	else printf("0");
}
