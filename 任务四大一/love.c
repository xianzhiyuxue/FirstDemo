#include<stdio.h>
#define M 100
int main(){
    int n,i,j,k;
	int tmp = 0;
	int tmpi = 0; 
	char a[M][M];
	int count = 0;
	scanf("%d",&n);
	//char a[5*n+1][7*n];
	 
    for( i = 0 ;i < ((5 * n) + 1) ; i++ )
		for( j = 0; j < 7 * n;j++){
			count = n;
			if((i == 0 && j == 2 * n - 1)||(i == 0 && j == 6 * n - 1 )||(i == n  && j == 4 * n - 1)||(i == 5 * n  && j == 4 * n - 1)){
			 a[i][j] = '_';
		     count--;
			 tmp = j;//暂存j，--count个数当前图案
			 while(count > 0){
			   a[i][tmp - 1] = a[i][tmp];
			   tmp--;
			   count--;
			 }	
			}
			else	if((i == n  && j == 0)||(i == n  && j == 4 * n )||(i == 3 * n  && j == 6 * n )||(i ==4 * n  && j == 5 * n )||(i == 5 * n  && j == 4 * n )){
                          a[i][j] = '/';
		                  count--;
						  tmp = j;
						  tmpi = i;
						  while(count > 0){
						   a[tmpi - 1][tmp + 1] = a[tmpi][tmp];
						   tmp++;//右移
						   tmpi--;//上移
						   count--;
			 }	
			}
           else  	if((i == n  && j == 3 * n - 1)||(i == n  && j == 7 * n - 1)||(i == 3 * n  && j ==  n - 1 )||(i ==4 * n  && j == 2 * n -1 )||(i == 5 * n  && j == 3 * n - 1 )){
                          a[i][j] = '\\';//转义字符\\表示\
						  count -= 1;//转义bug
		                  count--;
						  tmp = j;
						  tmpi = i;
						  while(count > 0){
						   a[tmpi - 1][tmp - 1] = a[tmpi][tmp];
						   tmp--;//左移
						   tmpi--;//上移
						   count--;
						  }	
			}
           else  	if((i == 2 * n && j == 0 )||(i == 2 * n && j == 7 * n -1)){
                         a[i][j] = '|';
						 count--;
						 tmp = i;
						 while(count > 0){
						   a[tmp - 1][j] = a[tmp][j];
						   tmp--;//上移
						   count--;
						 }	
		   }
		   else
			a[i][j]=' ';
		}
      for( i = 0;i < (5 * n) + 1;i++)
	  {
		  for(k = 0;k < n;k++)
		  printf(" ");
		  for( j = 0; j < 7 * n;j++)
	      printf("%c",a[i][j]);
		printf("\n");
	  }
	return 0;
}