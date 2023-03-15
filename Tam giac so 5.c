#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i, j, k, x;
	for(i = 1; i <= n; i++){
		for(x = n - i - 1; x >= 0; x--) printf("~");
		for(j = 1; j <= 2 * i; j++){
			if(j % 2 == 0) printf("%d", j);
		}
		for(j = 2 * i - 2; j > 0; j--){
			if(j % 2 == 0) printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
