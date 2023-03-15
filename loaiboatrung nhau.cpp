#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[100005];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(!b[a[i]]) printf("%d ",a[i]);
		b[a[i]] =1;
	}
}
