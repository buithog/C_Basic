#include<stdio.h>
#include<string.h>

void reverse(char s[]){
	int l=0,r=strlen(s)-1;
	while(l<r){
		char tmp[1];
		tmp[0]=s[l];
		s[l]=s[r];
		s[r] = tmp[0];
		r--;l++;
	}
}
int doi(char s[]){
	int sum=0;
	for(int i=0;i<strlen(s);i++){
		sum=sum*10+(s[i]-'0');
	}
	return sum;
}
int main(){
	char p[1000] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	while(true){
		char s[10000];
		gets(s);
		if(strcmp(s,"0") == 0) break;
		char a[2][10000];
		int n=0;
		char *token=strtok(s," ");
		while(token!=NULL){
			strcpy(a[n++],token);
			token=strtok(NULL," ");
		}
		int x=doi(a[0]);
		for(int i=0;i<strlen(a[1]);i++){
			for(int j=0;j<=28;j++){
				if(a[1][i] == p[j]) a[1][i] = p[j+x];
			}
		}
		reverse(a[1]);
		printf("%s\n",a[1]);
	}
}
