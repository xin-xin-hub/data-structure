#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct PTNode{//����˫�ױ�ʾ�� 
	ElemType data;//������ 
	int parent;//˫��λ���� 
}PTNode;

typedef struct {
	PTNode nodes[MAXSIZE];//����PTNode���� 
	int r,n;//������λ�úͽ����� 
}PTree;



int main() {//test

    return 0;

} 
