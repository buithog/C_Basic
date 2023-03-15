#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= 2 * i; j++){
			if(i % 2 == 0){
				if(j % 2 == 0) printf("%d", j);
			}
			else{
				if(j % 2 == 1) printf("%d", j);
			}
		}
		printf("\n");
	}
	return 0;
}
