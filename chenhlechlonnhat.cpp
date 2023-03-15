#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n],ok=0;
	for(int i=0;i<n;i++) {
	scanf("%d",&a[i]);
	if(i>=1 && a[i] != a[i-1]) ok =1;
	}
	qsort(a,n,sizeof(int),cmp);
	
	if(ok) printf("%d",a[n-1]-a[0]);
	else printf("-1");
}
