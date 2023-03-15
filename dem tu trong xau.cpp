#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	scanf("\n");
	while(t--){
		char s[1000];
		gets(s);
		char *token= strtok(s," ");
		int dem=0;
		while(token != NULL ){
			dem++;
			token=strtok(NULL," ");
		}
		printf("%d\n",dem);
		scanf("\n");
	}
}
