#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char s[1000];
	gets(s);
	int dem1=0,dem2=0,dem3=0;
	for(int i=0;i<strlen(s);i++){
		if(isalpha(s[i])) dem1++;
		if(isdigit(s[i])) dem2++;
		dem3= strlen(s) - dem1-dem2;
	}
	printf("%d %d %d",dem1,dem2,dem3);
}
