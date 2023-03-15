#include<stdio.h>
#include<string.h>
int check(char a[10000]){
	int sum=0;
	if(a[0] !='8' ) return 0;
	if(a[strlen(a)-1] !='8') return 0;
	for(int i=0;i<strlen(a);i++) sum+=a[i]-'0';
	if(sum%10 != 0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000];
		scanf("%s",&s);
		int l=0,r=strlen(s),ok=1;
		while(l<r){
			if(s[l] != s[r-1]) ok=0;
			l++;r--;
		}
		if(check(s) && ok==1) printf("YES\n");
		else printf("NO\n");
	}
}
