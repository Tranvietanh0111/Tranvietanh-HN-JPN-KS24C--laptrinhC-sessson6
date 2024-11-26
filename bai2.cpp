#include<stdio.h>
int main(){
	int num, chan=0 ,le=0;
	printf("vui long nhap 5 so nguyen\n");
	for(int i=1  ;i<=5;i++){
		printf("so thu %d :",i);
		scanf("%d", &num);
		if(num % 2 != 0){
			le++;
		}
		else{
			chan++;
		}
			
	}	
	printf("so luong so le la :%d\n",le);
    printf("so luong so chan la :%d",chan);
return 0;
}
