#include<stdio.h>
#include<stdlib.h>
#define KeyType int
typedef struct {
	KeyType key;//�ؼ�����
	//...		//������ 
}ElemType;

typedef struct {//˳���ṹ�����Ͷ��� 
	ElemType *R;//���ַ
	int length;//�� 
}SSTable;//Sequential Search Table

SSTable ST;//����˳��� 

int Search_Seq(SSTable *ST,KeyType key){
	ST->R[0].key = key;//0λ��������Ϊ�ڱ� 
	int i;
	for(i = ST->length;ST->R[i].key != key;i--);
	return i;
}


int main() {//test
	
    return 0;
} 
