#include <stdio.h>
#include <string.h>
#include <math.h>
typedef long long ll;

ll chuyenDoiSo(char a[]){
	ll n = 0;
	int i, l = strlen(a);
	for(i = l - 1; i >= 0; i--){
		n += (a[i] - 48) * pow(10, l - 1 - i);
	}
	return n;
}

int main()
{
	int t;
	scanf("%d\n", &t);
	while(t--)
	{
		char a[25];
		gets(a);
		int i, n = strlen(a), cnt = 0, cnt1 = 0;
		for(i = 0; i < n; i++){
			if( a[i] == '0' || a[i] == '8' || a[i] == '9' || a[i] == '1') cnt1++;
			else{
				cnt++;
			}
		}
		if(cnt > 0) printf("INVALID");
		else{
			for(i = 0; i < n; i++){
				if(a[i] == '0' || a[i] == '8' || a[i] == '9'){
					a[i] = '0';
				}
				else if(a[i] == '1'){
					a[i] = '1';
				}
			}
			if(chuyenDoiSo(a) == 0) printf("INVALID");
			else{
				printf("%lld", chuyenDoiSo(a));
			}
		}
		printf("\n");
	}
	return 0;
}
