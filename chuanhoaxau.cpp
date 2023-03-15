#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[10000],a[100][10000];
		int n=0;
		scanf("%s",s);
		char *token=strtok(s," ");
		while(token != NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		for(int i=0;i<n;i++){
			printf("%s ",a[i]);
		}
		printf("\n");
	}
}
