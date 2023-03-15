#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[10000],a[100][1000];
		gets(s);
		int n=0;
		char *token = strtok(s," ");
		while(token != NULL){
			strcpy(a[n++],token);
			token = strtok(NULL," ");
		}
		for(int i=0;i<n;i++){
			a[i][0] = toupper(a[i][0]);
			int x=strlen(a[i]);
			for(int j=1;j<x;j++){
				a[i][j] = tolower(a[i][j]);
			}
			printf("%s ",a[i]);
		}
		printf("\n");
	}
}
