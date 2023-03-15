#include<stdio.h>
#include<math.h>
int prime[100005];
void sang(){
	for(int i=0;i<=100000;i++) prime[i] =1;
	prime[0] =prime[1] =0;
	for(int i=2;i<1000;i++){
		if(prime[i]){
			for(int j=i*i;j<=100000;j+=i) prime[j] =0;
		}
	}
}
int main(){
	sang();
	int n,dem=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) {	
	scanf("%d",&a[i]);
	if(prime[a[i]]) dem++;
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++) if(prime[a[i]]) printf("%d ",a[i]);
}

