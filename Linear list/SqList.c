#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define MAXSIZE 100
typedef struct SqList{
	ElemType *elem;//指向顺序表的指针 
	int length;//长度 
}SqList;

int InitList_Sq (SqList *L){//初始化顺序表 
	L->elem = malloc(MAXSIZE * sizeof(ElemType));
	if(!L->elem) return 1;
	L->length = 0;
	return 0;
}

int GetLength (SqList *L){//获取顺序表长度 
	return L->length;
} 

int IsEmpty (SqList *L){//判断顺序表是否为空 
	if (L->length == 0) return 1;
	else return 0;
} 

int GetElem (SqList *L,int i,ElemType *e){//根据位置获取顺序表的取值 
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
		printf("获取元素失败！位置无效。");
	}
	
	free(L.elem);
	
	return 0;
} 
