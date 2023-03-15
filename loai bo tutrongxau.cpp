#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[],char b[]){
	if(strlen(a) != strlen(b)) return 0;
	else{
		for(int i=0;i<strlen(a);i++){
			if(a[i] != b[i]) return 0;
		}
	}
	return 1;
}
int main(){
		char s[1000],x[100];
		gets(s);
		scanf("\n");
		gets(x);
		char *token = strtok(s," ");
		while(token != NULL){
			if(!check(token,x)) printf("%s ",token);
			token=strtok(NULL," ");
		}
}
