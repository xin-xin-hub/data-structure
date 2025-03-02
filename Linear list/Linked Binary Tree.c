#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define ElemType int 
typedef struct BiNode{//��ʽ������ 
	ElemType data;//������ 
	struct BiNode *lchild,*rchild;//ָ���� 
}BiNode,*BiTree;

int PreOrderTraverse(BiTree T){//�������������(������)
	if(T == NULL) return 1;//�ն����� 
	else {
//		visit();//���ʸ��ڵ㣬����Ҫ���������ʲô
	 PreOrderTraverse(T->lchild);//�ݹ���������� 
	 PreOrderTraverse(T->rchild);//�ݹ����������
	}
	return 0; 
}

int InOrderTraverse(BiTree T){//�������������(�����)
	if(T == NULL) return 1;//�ն�����
	else {
	 InOrderTraverse(T->lchild);//�ݹ���������� 
//		visit();//���ʸ��ڵ㣬����Ҫ���������ʲô
	 InOrderTraverse(T->rchild);//�ݹ����������
	}
	return 0; 
}

int PostOrderTraverse(BiTree T){//�������������(���Ҹ�)
	if(T == NULL) return 1;//�ն�����
	else {
	 PostOrderTraverse(T->lchild);//�ݹ���������� 
	 PostOrderTraverse(T->rchild);//�ݹ����������
//		visit();//���ʸ��ڵ㣬����Ҫ���������ʲô
	}
	return 0; 
}

//int InOrderTraverse(BiTree T) {//��������������ķǵݹ��㷨������ջ 
//	BiTree p;
//	InitStack(S);//��ʼ��ջ 
//	p=T;
//	while (p || !StackEmpty(S)){//ջ��Ϊ�ջ�p��ΪNULL����ѭ�� 
//		if(p) {//p��ΪNULL���ջ 
//			Push(S,p);
//			p = p->lchild;
//		}else {
//			Pop(S,q);
//			printf("%c",q->data); 
//			p = q->rchild;
//		} 
//	}
//	return 0;
//}

//int LevelOrder(BiTree b){//��������α����㷨�����ö��� 
//	BiTree p;
//	SqQueue *qu;
//	InitQueue(qu);//��ʼ������ 
//	enQueue(qu,b);//���ڵ�ָ�������� 
//	while(!QueueEmpty(qu)){//�Ӳ�Ϊ�գ���ѭ�� 
//		deQueue(qu,p);//���ӽ��p 
//		printf("%c",p->data);//���ʽ��p 
//		if(p->lchild != NULL) enQueue(qu,p->lchild);//��������ʱ������� 
//		if(p->rchild != NULL) enQueue(qu,p->rchild);//�����Һ���ʱ������� 
//	}
//}

int CreateBiTree(BiTree *T){//������������ 
	char ch;
	scanf("%c",&ch);
	if(ch == "#") *T = NULL;//#��������ս�� 
	else {
		if(!(*T = malloc(sizeof(BiNode)))) return 1;
		(*T)->data = ch;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild));
	}
	return 0;
} 

int Copy(BiTree T,BiTree *NewT){//�����ƶ����� 
	if(T == NULL){
		*NewT = NULL;//����ΪNULL 
		return 0;
	}else {
		*NewT = malloc(sizeof(BiNode));
		(*NewT)->data = T->data;
		Copy(T->lchild,&((*NewT)->lchild));
		Copy(T->lchild,&((*NewT)->rchild));
	}	
}

int Depth(BiTree T){//�������������� 
	if(T == NULL) return 0;//��������0 
	else {
		int m = Depth(T->lchild); 
		int n = Depth(T->rchild);
		if(m > n) return m + 1;
		else return n + 1;
	}
}

int NodeCount(BiTree T){//���������������� 
	if(T == NULL) return 0;
	else return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
} 

int LeadCount(BiTree T){//���������Ҷ�ӽ������ 
	if(T == NULL) return 0;
	if(T->lchild == NULL && T->rchild == NULL) return 1; 
	else return LeadCount(T->lchild) + LeadCount(T->rchild);
} 

int main() {//test

    return 0;

} 
