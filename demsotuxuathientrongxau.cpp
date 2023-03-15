#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(){
	char s[1000],a[100][1000];
	int n=0;
	gets(s);
	for(int i=0;i<strlen(s);i++) s[i]=tolower(s[i]);
	char *token=strtok(s," ");
	while(token != NULL){
		strcpy(a[n++],token);
		token = strtok(NULL," ");
	}
	int dem[100000],danhdau[100000];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i],a[j]) == 0) {
			dem[i]++; danhdau[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(danhdau[i] == 0) printf("%s %d\n",a[i],dem[i]+1);
	}
}
