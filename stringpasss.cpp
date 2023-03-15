#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
		char s[1000];
		gets(s);
		char x[20] = "!@#$%^&*()-+";
		int ok1 = 0, ok2 = 0, ok3 = 0, ok4 = 0, ok5 = 1, ok6 = 0;
		if (strlen(s) >= 8) ok6 = 1;
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] >= 'A' && s[i] < 'Z') ok1 = 1;
		}
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] >= 'a' && s[i] <= 'z') ok2 = 1;
		}
		for (int i = 0; i < strlen(s); i++) {
			if (isdigit(s[i])) ok3 = 1;
		}
		for (int i = 0; i < strlen(s); i++) {
			for (int j = 0; j < 12; j++) {
				if (s[i] == x[j]) {
					ok4 = 1;
					break;
				}
			}
		}
		for (int i = 1; i < strlen(s); i++) {
			if (s[i] == s[i - 1]) ok5 = 0;
		}
		if (ok1 && ok2 && ok3 && ok4 && ok5 && ok6) printf("YES");
		else printf("NO");
	}
