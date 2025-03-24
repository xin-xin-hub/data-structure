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

void bubble_sort(SqList *L){
	int i,j;
	RedType x;//交换时临时存储
	for(i = 1;i <= L->length-1;i++){
		for(j = 1;j <= L->length - i;j++){//每一轮大数沉底 
			if(L->r[j].key > L->r[j+1].key){//发生逆序
				x = L->r[j];//交换顺序 
				L->r[j] = L->r[j+1];
				L->r[j+1] = x;
			}
		}
	} 
	
}
 

int main() {//test
	
    return 0;
} 
