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

int Search_Bin(SSTable *ST,KeyType key){
	int low = 1;
	int high = ST->length;//�������ֵ
	while (low <= high){
		int mid = (low + high) / 2;
		if(ST->R[mid].key == key) return mid;//�ҵ�����Ԫ��
		else if(key < ST->R[mid].key) //��С�������� 
			high = mid -1;//������ǰ�������в��� 
		else low = mid + 1;//�����ں�������в��� 
	} 
	return 0;//˳����в����ڴ���Ԫ�� 	
}

int Search_BinR(SSTable *ST,KeyType key,int low,int high){
	if(low > high) return 0;//���Ҳ���ʱ����0
	int mid = (low + high) / 2;
	if (key == ST->R[mid].key) return mid; 
	else if (key < ST->R[mid].key) 
	Search_BinR(ST,key,low,mid - 1);//�ݹ���ǰ�������в��� 
	else
	Search_BinR(ST,key,mid + 1,high);//�ݹ��ں�������в��� 
} 


int main() {//test
	
    return 0;
} 
