#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%d = ",n);
		for(int i=2;i<=sqrt(n);i++){
			int dem=0;
			while(n%i == 0){
				dem++;
				n/=i;
			}
			if(n%i == 0) printf("%d^%d * ",dem,i);
		}
		printf("\n");
	}
}
