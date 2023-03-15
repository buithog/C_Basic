#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s1[100000],s2[100000];
		scanf("%s",s1);
		scanf("%s",s2);
		int ok=1;
		for(int i=1;i<strlen(s1);i++){
			if(abs(s1[i] - s1[i-1]) != abs(s2[i] - s2[i-1]) ) 
			{
				ok=0;break;
			}
		}
		if(ok) printf("YES");
		else printf("NO");
	}
}
