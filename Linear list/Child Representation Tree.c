#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct CTNode {//���ӽ�� 
	int child;
	struct CTNode;
}*ChildPtr;

typedef struct {//˫�׽�� 
	ElemType data;//������ 
	ChildPtr firstchild;//��������ͷָ�� 
}CTBox;

typedef struct {//���Ľṹ 
	CTBox nodes[MAXSIZE];//ͷָ������  
	int n,r;//������͸�����λ�� 
}CTree;
//���Խ�����������˫�������ϣ������Ľṹ���ٴ洢˫�׵�λ�� 
int main() {//test

    return 0;

} 
