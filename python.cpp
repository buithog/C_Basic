#include<stdio.h>
#include<string.h>
int main(){
	char s[10000],a[100][10000];
	gets(s);
	int n=0;
	char x[10] ="py";
	char *token =strtok(s,".");
	while(token!= NULL){
		strcpy(a[n++],token);
		token=strtok(NULL,".");
	}
		if(strcmp(a[n-1],x) == 0) printf("yes");
		else printf("no");
	}
