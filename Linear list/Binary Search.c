#include<stdio.h>
#include<stdlib.h>
#define KeyType int
typedef struct {
	KeyType key;//关键字域
	//...		//其他域 
}ElemType;

typedef struct {//顺序表结构体类型定义 
	ElemType *R;//表基址
	int length;//表长 
}SSTable;//Sequential Search Table

SSTable ST;//定义顺序表 

int Search_Bin(SSTable *ST,KeyType key){
	int low = 1;
	int high = ST->length;//置区间初值
	while (low <= high){
		int mid = (low + high) / 2;
		if(ST->R[mid].key == key) return mid;//找到待查元素
		else if(key < ST->R[mid].key) //缩小查找区间 
			high = mid -1;//继续在前半区进行查找 
		else low = mid + 1;//继续在后半区进行查找 
	} 
	return 0;//顺序表中不存在待查元素 	
}

int Search_BinR(SSTable *ST,KeyType key,int low,int high){
	if(low > high) return 0;//查找不到时返回0
	int mid = (low + high) / 2;
	if (key == ST->R[mid].key) return mid; 
	else if (key < ST->R[mid].key) 
	Search_BinR(ST,key,low,mid - 1);//递归在前半区进行查找 
	else
	Search_BinR(ST,key,mid + 1,high);//递归在后半区进行查找 
} 


int main() {//test
	
    return 0;
} 
