#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct{
	ElemType *elem;//ָ��˳����ָ�� 
	int length;//���� 
}SqList;

int InitList_Sq (SqList *L){//��ʼ��˳��� 
	L->elem = malloc(MAXSIZE * sizeof(ElemType));
	if(!L->elem) return 1;
	L->length = 0;
	return 0;
}

int GetLength (SqList *L){//��ȡ˳����� 
	return L->length;
} 

int IsEmpty (SqList *L){//�ж�˳����Ƿ�Ϊ�� 
	if (L->length == 0) return 1;
	else return 0;
} 

int GetElem (SqList *L,int i,ElemType *e){//����λ�û�ȡ˳����ȡֵ 
	if (i < 1 || i > L->length) return 1;
	*e = L->elem[i - 1];
	return 0;
}
 
int main() {//test
	SqList L;
	InitList_Sq(&L);
	
	scanf("%d",L.elem);
	L.length++;
	
	int length;
	length = GetLength(&L);
	printf("%d\n",length);
	
	int e;
	if (GetElem(&L,1,&e) == 0){
		printf("%d",e);		
	}else {
		printf("��ȡԪ��ʧ�ܣ�λ����Ч��");
	}
	
	free(L.elem);
	
	return 0;
} 
