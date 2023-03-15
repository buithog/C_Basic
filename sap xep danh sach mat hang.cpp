#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct qlsv {
	int code;
	char name[100], date[12];
	double p1, p2, total;
} sv;
int main() {
	sv ds[100];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i){
		getchar();
		ds[i].code = i + 1;
		gets(ds[i].name); gets(ds[i].date);
		scanf("%lf%lf", &ds[i].p1, &ds[i].p2);
		ds[i].total = ds[i].p2 - ds[i].p1;
	}
	for(int i = 0; i < n - 1; ++i){
		for(int j = i + 1; j < n; ++j){
			if(ds[i].total < ds[j].total){
				sv tmp = ds[i];
				ds[i] = ds[j];
				ds[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n; ++i){
		printf("%d %s %s %.2lf\n", 
			ds[i].code, ds[i].name, ds[i].date, ds[i].total);
	}
	return 0;
}
