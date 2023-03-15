#include<stdio.h>
#include<string.h>
#include<ctype.h>
void dao(int a[],int n){
	int l=0,r=n-1;
	while(l<r){
		int tmp = a[l];
		a[l]=a[r];
		a[r]=tmp;
	}
}
void add(char s1[], char s2[]){
	int n1=strlen(s1),n2=strlen(s2);
	int a[n1],b[n1],c[n1+1];
	for(int i=0;i<n1;i++) a[i]=s1[i]-'0';
	for(int i=0;i<n2;i++) b[i] = s2[i]-'0';
	for(int i=n2;i<n1;i++) b[i]=0;
	dao(a,n1);
	dao(b,n1);
	int tmp=0;
	for(int i=0;i<=n1;i++){
		c[i]=(a[i]+b[i]+tmp)%10;
		tmp= (a[i]+b[i]+tmp)/10;
	}
	if(c[n1] != 0) printf("%d",c[n1]);
	for(int i=n1-1;i>=0;i--){
		printf("%d",c[i]);
	}
}
int main(){
	char s1[100000],s2[100000];
	scanf("%s",s1);
	scanf("\n");
	scanf("%c",s2);
	if(strlen(s1)>strlen(s2)) add(s1,s2);
	else add(s2,s1);
}
