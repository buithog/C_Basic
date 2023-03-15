#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char s[1000000];
	gets(s);
	long long sum=0,tmp=0;
	s[strlen(s)] = 'a';
	for(int i=0;i<strlen(s);i++){
		if(isdigit(s[i])){
			tmp=tmp*10+ (s[i]-'0');
		}
		else {
			if(tmp > sum) sum=tmp;
			tmp=0;
		}
	}
	printf("%lld",sum);
}
