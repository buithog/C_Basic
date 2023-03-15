#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[105],b[105];
	for(int i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	int res=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j]) + abs(b[i]-b[j])>res)
				res = abs(a[i]-a[j]) + abs(b[i]-b[j]);
		}
	}
	printf("%d",res);
}
