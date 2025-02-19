#include<stdio.h>
#include<stdlib.h>
#define ElemType int
typedef struct Lnode{
	ElemType data;//������ 
	struct Lnode *next;//ָ���� 
}Lnode,*LinkList;

int InitList_L (LinkList *L){//��ʼ�������� 
	*L = malloc(sizeof(Lnode));
	(*L)->next = NULL; 
	if(*L == NULL) return 1; 
	return 0;
}

int IsEmpty (LinkList L){//�жϵ������Ƿ�Ϊ�� 
	if(L->next) return 0;
	else return 1; 
} 

int DestroyList_L (LinkList L){//���ٵ����� 
	LinkList p;
	while(L){
		p = L;
		L = L->next;
		free(p);
	}
	return 0; 
} 

int ClearList (LinkList L){//��յ�����
	LinkList p,q;
	p = L->next;
	while(p){
		q = p->next;
		free(p);
		p = q;
	}
	L->next = NULL;
	return 0; 	
}

int GetLength (LinkList L){//��ȡ������
 	LinkList p;
 	p = L->next;
 	int count=0;
	 while(p){
	 	count++;
	 	p = p->next;
	 } 
	return count;
} 

int GetElem_L (LinkList L,int i,ElemType *e){//��ȡ���������ݵ����� 
	LinkList p = L->next;
	int j = 1;
	while(p && j < i){
		p = p->next;
		j++;
	}
	if(!p || j > i) return 1;//��iԪ�ز����� 
	*e = p->data;
	return 0;
}

LinkList LocateElem_L (LinkList L,ElemType *e){//��ֵ����Ԫ�� 
	LinkList p = L->next;
	while(p && p->data != *e){
		p = p->next;
	}
	return p;
}

int ListInsert_L (LinkList L,int i,ElemType *e){//�ڵ�i��Ԫ��֮ǰ��������Ԫ��e 
	LinkList p = L;
	int j = 0;
	while(p && j < i-1){
		p = p->next;
		j++;
	}
	if(!p || j > i-1) return 1;
	LinkList s = malloc(sizeof(Lnode));
	s->data = *e;
	s->next = p->next;
	p->next = s; 
	return 0;
}

int ListDelete_L (LinkList L,int i,ElemType *e){//ɾ�������е�i������Ԫ�� 
	LinkList p = L;
	int j = 0; 
	while(p->next && j < i-1){
		p = p->next;
		j++;
	} 
	LinkList q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);
	return 0;
} 

void CreateList_H (LinkList *L,int n){//ͷ�巨 
	*L = malloc(sizeof(Lnode));
	(*L)->next = NULL;
	int i;
	for(i = n;i > 0;i--){
		LinkList p = malloc(sizeof(Lnode));
		scanf("%d",&p->data);
		p->next = (*L)->next;
		(*L)->next = p;
	}
}

void CreateList_R (LinkList *L,int n){//β�巨 
	*L = malloc(sizeof(Lnode));
	(*L)->next = NULL;
	LinkList r = *L;//βָ�� 
	int i;
	for(i = n;i > 0;i--){
		LinkList p = malloc(sizeof(Lnode));
		scanf("%d",&p->data);
		p->next = NULL;
		r->next = p; 
		r = p;
	}
}
 
int main() {//test

	
	return 0;
} 
