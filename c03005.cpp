#include<stdio.h>
int ucln(int a,int b){
	if(b==0) return a;
	else return ucln(b,a%b);
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=n;i<k;i++){
		for(int j=n+1;j<=k;j++){
			if(ucln(i,j) == 1) if(i<j) printf("(%d,%d)\n",i,j);
		}
	}
}
