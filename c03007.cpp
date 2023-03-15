#include<stdio.h>
#include<math.h>
int p[100005];
int nt(){
	for(int i=0;i<10000;i++) p[i]=1;
	p[0] = p[1] =0;
	for(int i=2;i<1000;i++){
		if(p[i])
		for(int j=i*i;j<100000;j+=i) p[j]=0;
	}
}
int tn(int n){
	if(n<10) return 0;
	int m=n,tmp=0;
	while(m>0){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if(tmp== n) return 1;
	return 0;
}
int main(){
	nt();
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		int dem=0;
		for(int i=n;i<=k;i++){
			if(tn(i) && p[i]) {
			printf("%d ",i);
			dem++;
			}
			if(dem==10){
				printf("\n");
				dem=0;
			}
			
		}
		printf("\n");
	}
	
}
