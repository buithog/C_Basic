#include<stdio.h>
#include<string.h>
#include<math.h>
int check(char a[500]){
	if(s[0] != '8') return 0;
	if(a[strlen(a)-1] )
	for(int i=0;i<strlen(a);i++){
		int x=a[i]-'0';
		if(x%2 != 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[500];
		int ok=1;
		scanf("%s",&s);
		if(!check(s)) ok=0;
		int l=0,r = strlen(s)-1;
		while(l<r){
			if(s[l] != s[r]) ok=0;
			l++;r--;
		}
		if(ok && check(s)) printf("YES\n");
		else printf("NO\n");
	}
}
