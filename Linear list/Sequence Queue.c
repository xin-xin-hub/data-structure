#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct SqQueue{
	ElemType *base;
	int front;//ͷָ�� 
	int rear;//βָ�� 
}SqQueue;

int InitQueue (SqQueue *Q){//��ʼ��˳����� 
	Q->base = malloc(MAXSIZE * sizeof(ElemType)); 
	if(!Q->base) return 1;
	Q->front = Q->rear = 0; 
	return 0;
}

int QueueLength (SqQueue *Q){//��ȡ���� 
	return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
} 

int GetHead (SqQueue *Q,ElemType *e){//��ȡ��ͷ���� 
	if(Q->front != Q->rear) 
	*e = Q->base[Q->front];
	return 0;
}

int EnQueue (SqQueue *Q,ElemType e){//ѭ����� 
	if((Q->rear + 1) % MAXSIZE == Q->front) return 1;//���� 
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE; 
	return 0;
}

int DeQueue (SqQueue *Q,ElemType *e){//ѭ������ 
	if(Q->front == Q->rear) return 1;//�ӿ�
	*e = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE; 	 
	return 0; 
} 
 
int main() {//test

	
	return 0;
} 
