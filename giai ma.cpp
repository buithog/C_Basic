#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000];
		scanf("%s",&s);
		for(int i=1;i<strlen(s);i++){
			if(isalpha(s[i-1]) && isdigit(s[i])){
				int x=s[i]-'0';
				for(int j=1;j<=x;j++) printf("%c",s[i-1]);
			}
		}
		printf("\n");
	}
	printf("%c",");
}
