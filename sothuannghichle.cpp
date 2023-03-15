#include<stdio.h>
#include<string.h>
int tn(char s[100]){
	int l=0,r=strlen(s)-1;
	while(l<r){
		if(s[l] != s[r]) return 0;
		l++;r--;
	}
	return 1;
}
int check(char s[100]){
	int sum=0;
	for(int i=0;i<strlen(s);i++){
		if((s[i] -'0')%2 == 0) return 0;
		sum+=s[i]-'0';
	}
	if(sum%2 ==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[100];
		scanf("%s",&s);
		int l=0,r=strlen(s)-1;
		if(check(s) && tn(s)) printf("YES\n");
		else printf("NO\n");
		}
	}
