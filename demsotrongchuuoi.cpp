#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[1000005];
	gets(s);
	int res=0,cnt=0;
	for(int i=0;i<strlen(s);i++){
		if(isdigit(s[i]) ) cnt=1;
		 if(isalpha(s[i])){
			res+=cnt;
			cnt=0;
		}
		if(i == strlen(s)-1 && isdigit(s[i])){
			res+=1;
		}
	}
	printf("%d",res);
}
