#include<stdio.h>
#include<math.h>
#include<float.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[1000];
	int b[10000] ={0};
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
		b[a[i]]++;
	}
	int dem=0;
	int i=0;
	for( i=0;i<n;i++){
		if(b[a[i]] == 1) dem++;
		else b[a[i]] =0;
	}
	printf("%d",dem);
	printf("\n");
	int j=0;
	for(int j=0;j<n;j++){
		if(b[a[i]] == 1) printf("%d ",a[i]);
	}
	printf("\n");
}
