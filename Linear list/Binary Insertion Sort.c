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

void BInsertSort(SqList *L){
	for(int i = 2;i <= L->length;i++){//依次插入第2-n个元素 
		L->r[0].key = L->r[i].key;//当前插入元素存到"哨兵"位置
		int low = 1,high = i-1;//采用二分查找法查找插入位置
		while(low <= high){
			int mid = (low + high) / 2;
			if(L->r[0].key < L->r[mid].key){
				high = mid -1;
			}else low = mid + 1;
		} //循环结束，high + 1则为插入位置 
		for(int j = i-1;j >= high;--j) L->r[j+1].key = L->r[j].key;//移动元素
		L->r[high + 1].key = L->r[0].key;//插入到正确位置 
	}
}
 

int main() {//test
	
    return 0;
} 
