#include<stdio.h>
#include<string.h>
int main(){
	char s[10000];
	scanf("%s",&s);
	char a[100000];
	for(int i=0;i<strlen(s);i++) a[i]=-1;
	int index=0,dem=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == 39 || s[i] == 34){
			a[index++]=s[i];
		}
		else {
			if(s[i] == ')' && a[index-1] == '('){
				a[index-1]=-1;
				index--;
				dem++;
			}
			if(s[i] == ']' && a[index-1] == '['){
				a[index-1]= -1 ;
				index--;
				dem++;
			}
			if(s[i] == '}' && a[index-1] == '{'){
				a[index-1]=-1;
				index--;
				dem++;
			}
			if(s[i] == '0'+39 && a[index-1] == '0'+39){
				a[index-1]=-1;
				index--;
				dem++;
			}
			if(s[i] == 34+'0' && a[index-1] == 34+'0'){
				a[index-1]=-1;
				index--;
				dem++;
			}
		}
	}
	if(index == 0) printf("1");
	else printf("0");
}
