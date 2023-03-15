#include<stdio.h>
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		int ok=1;
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				ok=0;
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		if(!ok) {
		printf("Buoc %d ",i+1);
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
			}
			printf("\n");
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sapxep(a,n);
}
