#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 255
typedef struct SString{//˳���ַ��� 
	char ch[MAXSIZE + 1];//�±�Ϊ0�����洢 
	int length;//���� 
}SString;

int Index_BF (SString *S,SString *T,int pos){//BF�㷨//posΪ������ʼƥ���λ�� 
	int i=pos,j=1;//iΪ�����±꣬jΪ�Ӵ��±� ,��1��ʼ 
	while (i <= S->length && j <= T->length){
		if(S->ch[i] == T->ch[j]) {
			i++;
			j++;
		}else {
			i = i - j + 2;
			j = 1;
		} 
	}
	if(j > T->length) return i - T->length;//���������whileѭ����֪i - T->lengthΪƥ���ַ����ĵ�һ���ַ����±�
	else return 0;//ģʽƥ��ʧ�� 
} 

int main() {//test
	SString S, T;

	return 0;
} 
