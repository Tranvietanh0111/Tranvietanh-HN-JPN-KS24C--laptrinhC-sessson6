#include<stdio.h>
int main(){
	int n;
	printf("nhap mot so nguyen bat ki:");
	scanf("%d", &n);
	printf("cac uoc cua %d la:",n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf(" %d",i);
		}
	}
	return 0;
}
