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

void BInsertSort(SqList *L){
	for(int i = 2;i <= L->length;i++){//���β����2-n��Ԫ�� 
		L->r[0].key = L->r[i].key;//��ǰ����Ԫ�ش浽"�ڱ�"λ��
		int low = 1,high = i-1;//���ö��ֲ��ҷ����Ҳ���λ��
		while(low <= high){
			int mid = (low + high) / 2;
			if(L->r[0].key < L->r[mid].key){
				high = mid -1;
			}else low = mid + 1;
		} //ѭ��������high + 1��Ϊ����λ�� 
		for(int j = i-1;j >= high;--j) L->r[j+1].key = L->r[j].key;//�ƶ�Ԫ��
		L->r[high + 1].key = L->r[0].key;//���뵽��ȷλ�� 
	}
}
 

int main() {//test
	
    return 0;
} 
