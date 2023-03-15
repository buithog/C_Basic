#include <stdio.h>
#include <math.h>
int cp(int n){
	int z;
	for(int i = 0 ; i <=sqrt(n) ; i++){
		while(n%i == 0){
			if(i%2==0) z++;
			n/=i;
		}
	}
	 return z;
	
}
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",cp(n));
	}
	
}
