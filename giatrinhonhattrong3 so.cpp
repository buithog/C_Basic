#include<stdio.h>
int main(){
	int tmp=1000005;
	for(int i=0;i<3;i++){
		int x;
		scanf("%d",&x);
			if(tmp>x) tmp=x;
	}
	printf("%d",tmp);
}
