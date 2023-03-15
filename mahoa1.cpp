#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char s[10000];
		scanf("%s",&s);
		int cnt=1;
		for(int i=0;i<strlen(s);i++){
			if(s[i] != s[i+1]){
				
			 	printf("%d%c",cnt,s[i]);
			 	cnt=1;
			}
			else {
				cnt++;
			}
		}
		printf("\n");
	}
}
