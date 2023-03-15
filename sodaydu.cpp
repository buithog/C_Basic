#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000];
		int x[10]={0},ok=1;
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++) if(s[i]<'0' || s[i]>'9' ) ok=0;
		if(s[0]=='0' || !ok ) printf("INVALID\n");
		else{
			for(int i=0;i<strlen(s);i++){
				if(s[i]>='0' && s[i]<='9') x[s[i] - '0']++;
			}
			for(int i=0;i<10;i++){
				if(!x[i]) ok=0;
			}
			if(ok) printf("YES\n");
			else printf("NO\n");
		}
	}
}
