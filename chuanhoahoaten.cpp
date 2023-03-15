#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void chuanhoa(char s[]){
	s[0] =toupper(s[0]);
	for(int i=1;i<strlen(s);i++){
		s[i] =tolower(s[i]);
	}
}
void chuanhoaho(char s[]){
	for(int i=0;i<strlen(s);i++){
		s[i] = toupper(s[i]);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[1000],a[40][100];
		int n=0;
		gets(s);
		char *token =strtok(s," ");
		while(token != NULL){
			strcpy(a[n],token);
			n++;
			token = strtok(NULL," ");
		}
		chuanhoaho(a[0]);
		for(int i=1;i<n;i++){
			chuanhoa(a[i]);
			printf("%s",a[i]);
			if(i != n-1) printf(" ");
		}
		printf(", %s\n",a[0]);
	}
}
