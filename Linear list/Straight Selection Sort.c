#include<stdio.h>
#include<stdlib.h>
#define KeyType int
#define MAXSIZE 20 //设记录不超过20个
typedef int Keytype;//设关键字为整型量（int型）

typedef struct{//定义每个记录（数据元素）的结构
	KeyType key;//关键字
//	InfoType otherinfo;//其他数据项 
}RedType;//Record Type

typedef struct{//定义顺序表的结构 
	RedType r[MAXSIZE + 1];//存储顺序表的向量
							//r[0]一般作哨兵或缓冲区 
	int length;//顺序表的长度 
}SqList; 

void SelectSort(SqList *L){
	for(int i = 1;i < L->length;i++){
		int k = i;
		for(int j = i+1;j <= L->length;j++){
			if(L->r[j].key < L->r[k].key) k = j;//记录最小值位置
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
