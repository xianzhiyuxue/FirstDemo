#include<stdio.h>

int main(){
 
	int count[5]={0,0,0,0,0};
   char a[100];
   void countString(char *p1,int count[]);
    gets(a);
  
   countString(a,count);//*p1 = a
   printf("��д��ĸ��%d\n",count[0]);
   printf("Сд��ĸ��%d\n",count[1]);
   printf("�ո�%d\n",count[2]);
   printf("���֣�%d\n",count[3]);
   printf("�����ַ���%d\n",count[4]);
	return 0;
}
void countString(char *p1,int count[]){

	while(*p1 != '\0'){
	if(*p1 >= 65 && *p1 <= 90)
		count[0]++;
	else if(*p1 >= 97 && *p1 <= 122)
		count[1] += 1;
	else if(*p1 == 32)//�ո�
		count[2] += 1;
	else if(*p1 >= 48 && *p1 <= 57)
		count[3] += 1;
	else
		count[4] += 1;
	p1++;
	}
 
}