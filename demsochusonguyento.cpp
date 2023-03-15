#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char s[100];
	gets(s);
	int dem[10],danhdau[10];
	for(int i=0;i<10;i++) dem[i]=0;
	for(int i=0;i<strlen(s);i++){
		for(int j=i+1;j<strlen(s);j++){
			if(s[i] == s[j]) {
				dem[i]++;danhdau[j] =1;
			}
		}
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7' && danhdau[i] != 1){
			printf("%c %d\n",s[i],dem[i]+1);
		}
	}
}
