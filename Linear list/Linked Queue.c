#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct Qnode{
	ElemType data;//������ 
	struct Qnode *next;//ָ���� 
}Qnode,*QueuePtr;

typedef struct{
	QueuePtr front;//��ͷָ�� 
	QueuePtr rear;//��βָ�� 
}LinkQueue;

int InitQueue (LinkQueue *Q){//��ʼ�������� 
	Q->front = Q->rear = malloc(sizeof(Qnode));
	if(!Q->front) return 1;
	Q->front->next = NULL; 
	return 0;
}

int DestroyQueue (LinkQueue *Q){//���������� 
	while(Q->front){
		QueuePtr p = Q->front->next;
		free(Q->front);
		Q->front = p; 
	}
	return 0;
}

int GetHead (LinkQueue *Q,ElemType *e){//��ȡ��ͷ���� 
	if(Q->front == Q->rear) return 1; 
	*e = Q->front->next->data;
	return 0;
}

int EnQueue (LinkQueue *Q,ElemType e){//��� 
	QueuePtr p = malloc(sizeof(Qnode));
	if(!p) return 1; 
	p->data = e;
	p->next = NULL;
	Q->rear->next = p; 
	Q->rear = p; 
	return 0;
}

int DeQueue (LinkQueue *Q,ElemType *e){//���� 
	if(Q->front == Q->rear) return 1;//�ӿ�
	QueuePtr p = Q->front->next;
	*e = p->data;
	Q->front->next = p->next;
	if(Q->rear == p) Q->rear = Q->front;
	free(p);	 
	return 0; 
} 
 
int main() {//test

	
	return 0;
} 
