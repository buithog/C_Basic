#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sapxepchon(int a[],int n){
	for(int i=0;i<n-1;i++){
		int minpos=i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[i] && a[minpos] > a[j]) {

			minpos=j;
			}
		}
		int tmp=a[minpos];
		a[minpos] = a[i];
		a[i] =tmp;
			for(int i=0;i<n;i++){
				printf("%d ",a[i]);
			}
			printf("\n");
		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sapxepchon(a,n);
}
