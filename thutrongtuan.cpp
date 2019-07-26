#include <stdio.h>

int main(){
	int x ;
	printf("nhap mot so :\n");
	scanf("%d",&x);
	
	if (x>=2 && x<9){
		if (x==8){
	  		printf("day la chu nhat ");
		}else{
			printf("day la thu %d ",x);
		}
	}else{
		printf("day khong phai thu trong tuan");
	}
	return 0;
	
}
