#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	for(int x=1;x<=t;x++){
		char s1[10000],a[100][1000],s2[100];
		gets(s1);
		gets(s2);
		for(int j=0;j<strlen(s2);j++){
				s2[j] = tolower(s2[j]);
			}
		int n=0;
		char *token=strtok(s1," ");
		while(token != NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		int danhdau[1000];
		char tmp[1000];
		for(int i=0;i<n;i++){
			strcpy(tmp,a[i]);
			for(int j=0;j<strlen(tmp);j++){
				tmp[j] = tolower(tmp[j]);
			}
			if(strcmp(s2,tmp) == 0)
				danhdau[i] =1;
		}
		printf("Test %d:",x);
		for(int i=0;i<n;i++){
			if(!danhdau[i]) printf("%s ",a[i]);
		}
		printf("\n");
		}
}
