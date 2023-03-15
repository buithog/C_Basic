#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[100000];
		for(int i=0;i<100000;i++) b[i]=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int cnt=0;

	for(int i=0;i<100000;i++){
		if(b[i] >1) cnt++;
	}
	printf("%d\n",cnt);
	for(int i=0;i<n;i++){
		if(b[a[i]] >1) printf("%d ",a[i]);
		b[a[i]]=0;
	}
}
