#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoaten(char s[]){
	for(int i=0;i<strlen(s);i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	char s[1000],a[100][1000];
	int n=0;
	gets(s);
	char *token=strtok(s," ");
	while(token != NULL){
		strcpy(a[n],token);
		n++;
		token = strtok(NULL," ");
	}
	for(int i=0;i<n-1;i++){
		chuanhoaten(a[i]);
		printf("%c",a[i][0]);
	}
	chuanhoaten(a[n-1]);
	printf("%s@ptit.edu.vn\n",a[n-1]);
}
