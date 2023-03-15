#include<stdio.h>
int  main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int res[n];
	for(int i=0;i<n;i++) res[i]=-1;
	int index=0;
	for(int i=0;i<n;i++){
		if(res[index] = -1 && index == 0){
			res[index]=a[i];
			index++;
		}
		else  if((a[i] + res[index - 1]) %2 !=0){
			 res[index++] =a[i];
		}
		else {
			index--;
			res[index]=-1;
		}
	}
	printf("%d",index);
}
