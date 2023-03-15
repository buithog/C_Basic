#include<stdio.h>
#include<math.h>
#include<string.h>
int nt[1000005];
void sang(){
	for(int i=0;i<1000005;i++) nt[i] =1;
	nt[0 ] = nt[1]= 0;
	for(int i=2;i<1000;i++){
		if(nt[i]){
			for(int j=i*i;j<1000005;j+=i){
				nt[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	char s[1000000];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(nt[i]) printf("*");
		else printf("%c",s[i]);
	}
}
