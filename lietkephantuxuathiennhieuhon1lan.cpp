#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[100005]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int dem=0;
		for(int i=0;i<100005;i++){
		if(b[i] >1) dem++;
	}
	printf("%d\n",dem);
	for(int i=0;i<100005;i++){
		if(b[i] >1) printf("%d ",i);
	}
}
