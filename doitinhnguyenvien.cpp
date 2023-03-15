#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],danhdau[100000],dem[100000];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
 	for(int i=0;i<n;i++){
 		if(danhdau[i] == 0){
			for(int j=i+1;j<n;j++){
				if(a[i] == a[j]){
					dem[i]++;danhdau[j]=1;
				}
			}
		}
	}
	int res=0;
	for(int i=0;i<n;i++){
		if(dem[i] > dem[res] && danhdau[i] == 0) res=i;
		if(danhdau[i]== 0 && dem[i] == dem[res] && a[i] > a[res]) res=i; 
	}
	printf("%d %d",a[res],dem[res]+1);
}
