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

void bubble_sort(SqList *L){
	int i,j;
	RedType x;//����ʱ��ʱ�洢
	for(i = 1;i <= L->length-1;i++){
		for(j = 1;j <= L->length - i;j++){//ÿһ�ִ������� 
			if(L->r[j].key > L->r[j+1].key){//��������
				x = L->r[j];//����˳�� 
				L->r[j] = L->r[j+1];
				L->r[j+1] = x;
			}
		}
	} 
	
}
 

int main() {//test
	
    return 0;
} 
