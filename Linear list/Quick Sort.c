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
	if(low < high){//长度大一1
		int pivotloc = Partition(L,low,high);
		//将L.r[low...high]一分为二,pivotloc为枢纽
		QSort(L,low,pivotloc-1);//对低子表递归排序 
		QSort(L,pivotloc+1,high);//对高子表递归排序 
	}
}
 

int main() {//test
	
    return 0;
} 
