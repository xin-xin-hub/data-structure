#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 80
typedef struct Chunk{
	char ch[MAXSIZE];//������ 
	struct Chunk *next;//ָ���� 
}Chuck;

typedef struct{
	Chuck *head,*tail;//����ͷָ���βָ��
	int curlen;//���� 
}LString;//�ַ����Ŀ����ṹ 
 
int main() {//test

	
	return 0;
} 
