#include<stdio.h>
#include<stdlib.h>
#define KeyType int
#define MAXSIZE 20 //���¼������20��
typedef int Keytype;//��ؼ���Ϊ��������int�ͣ�

typedef struct{//����ÿ����¼������Ԫ�أ��Ľṹ
	KeyType key;//�ؼ���
//	InfoType otherinfo;//���������� 
}RedType;//Record Type

typedef struct{//����˳���Ľṹ 
	RedType r[MAXSIZE + 1];//�洢˳��������
							//r[0]һ�����ڱ��򻺳��� 
	int length;//˳���ĳ��� 
}SqList; 

void SelectSort(SqList *L){
	for(int i = 1;i < L->length;i++){
		int k = i;
		for(int j = i+1;j <= L->length;j++){
			if(L->r[j].key < L->r[k].key) k = j;//��¼��Сֵλ��
		}
		if(k != i) {
			int temp = L->r[i].key;
			L->r[i].key = L->r[k].key;
			L->r[k].key = temp; 
		}
	}
}
 

int main() {//test
	
    return 0;
} 
