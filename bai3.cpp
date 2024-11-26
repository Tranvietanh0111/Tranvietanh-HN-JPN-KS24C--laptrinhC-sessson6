#include<stdio.h>
int main(){
	int pass=511106 , input_pass;
		while(pass!= input_pass){
			printf("nhap mat khau 6 chu so:");
			scanf("%d", &input_pass);
			if(input_pass==pass){
				printf("mat khau chinh xac");
			}
			else{
				printf("sai mat khau vui long thu lai\n");
			}
		}
return 0;
}
