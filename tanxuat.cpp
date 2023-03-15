#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem[100005],danhdau[100005];
	for(int i=0;i<100000;i++) danhdau[i]=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] == a[j]) {
				danhdau[j]=1;dem[i]++;
			}
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(danhdau[i] ==0) cnt++;
	}
	printf("%d\n",cnt);
	for(int i=0;i<n;i++){
		if(danhdau[i] == 0) printf("%d %d\n",a[i],dem[i]+1);
	}
}
