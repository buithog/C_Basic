#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[1000005];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int res=1,index=0;
	for(int i=0;i<n;i++){
		if(b[a[i]] >res) {
		res=b[a[i]];
		index=i;
		}
	}
	printf("%d %d",a[index],res);
}
