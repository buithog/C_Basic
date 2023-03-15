#include<stdio.h>
#include<string.h>
int check(char s[]){
	int c=0,le=0;
	for(int i=0;i<strlen(s);i++){
		if((s[i]-'0')%2 == 0) c++;
		else le++;
	}
	if(c>le && (strlen(s)%2 == 0 )) return 1;
	if(c<le && (strlen(s)%2 != 0 )) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000];
		int ok=1;
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++) if(s[i]<'0' || s[i]>'9' ) ok=0;
		if(s[0]=='0' || !ok ) printf("INVALID\n");
		else{
			if(check(s)) printf("YES\n");
			else printf("NO\n");
		}
	}
}
