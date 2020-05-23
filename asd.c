#include <stdio.h>
#include <math.h>

int main(){
	int ade,prod,n,abc,i;
	int array[3]={0,0,0};
	scanf("%d",&abc);
	n=100;
	if (abc>=100){
		prod+=99;
		printf("%d %d %d",n,abc,abc-n);
		
		while (n==abc){
			for (i=0;i<3;i++){
				ade=pow(10,2-i);
				//printf("%d\n",ade);
				array[i]=n/ade;
				n-=(n/ade)*ade;
				//printf("%d\n",array[i]);
			}
			if (array[1]-array[2]==array[2]-array[3]){
				prod++;
			}
			n++;
		}
		printf("%d",prod);
	}
	if (abc<100){
		printf("%d",abc);
	}
	if (abc==100){
		printf("99");
	}
	return 0;
}