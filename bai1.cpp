#include<stdio.h>
int main(){
	int num, sum;
	printf("vui long nhap 5 so nguyen\n");
	for(int i=1  ;i<=5;i++){
		printf("so thu %d :",i);
		scanf("%d", &num);
		if(num % 2 != 0){
			sum += num;
		}
	}	
	printf("tong cua cac so le la :%d",sum);
return 0;
}
