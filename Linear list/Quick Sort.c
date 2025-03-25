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

int Partition(SqList *L,int low,int high){
	L->r[0] = L->r[low];
	int pivotkey = L->r[low].key;
	while(low < high){
		while(low < high && L->r[high].key >= pivotkey) --high;
		L->r[low] = L->r[high];
		while(low < high && L->r[low].key <= pivotkey) ++low;
		L->r[high] = L->r[low];
	}
	L->r[low] = L->r[0];
	return low;
}

void QSort(SqList *L,int low,int high){
	if(low < high){//���ȴ�һ1
		int pivotloc = Partition(L,low,high);
		//��L.r[low...high]һ��Ϊ��,pivotlocΪ��Ŧ
		QSort(L,low,pivotloc-1);//�Ե��ӱ�ݹ����� 
		QSort(L,pivotloc+1,high);//�Ը��ӱ�ݹ����� 
	}
}
 

int main() {//test
	
    return 0;
} 
