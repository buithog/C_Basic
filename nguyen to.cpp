#include<stdio.h>
int nt[100005];
void sang(){
	for(int i=0;i<=100000;i++) nt[i] =1;
	nt[0] =nt[1] =0;
	for(int i=2;i<1000;i++){
		if(nt[i]){
			for(int j=i*i;j<=100000;j+=i) nt[i] =0;
		}
	}
}
int main(){
	sang();
	
}
