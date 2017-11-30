#include<stdio.h>
#include<math.h>
int main(){
	int n,j;
	int i = 0;
	int a[100];
	int flag = 0;												
	scanf("%d",&n);
	// end input
	if(n < 0){
		n = abs(n);//绝对值函数
	    flag = 1;
	}
    while(n){
       a[i] = n % 10;
       n = n / 10;
	   i++;
	}    
     //output
	if(flag)
	  printf("-");	
	//printf("%d",n);
    for( j = 0;j < i;j++){//栈 后进先出
		if(a[j])
          printf("%d",a[j]);
		  }
	printf("\n");
	return 0;
}