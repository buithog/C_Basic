#include<stdio.h>
void sapxep(int a[], int n){
	int index;
    for(int i = 0; i < n - 1; i++){
        index = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[index]) 
				index = j;
        }
        int tmp=a[i];
        a[i]=a[index];
        a[index]=tmp;
        printf("Buoc %d: ",i+1);
		for(int j = 0; j < n; j ++)
		    printf("%d ",a[j]);
		printf("\n");
    }
}
main(){
    int a[100], n;
    scanf("%d",&n);
    for(int i = 0; i < n; i ++) scanf("%d",&a[i]);
    sapxep(a, n);
    return 0;
}
