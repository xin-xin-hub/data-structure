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

int Search_Seq(SSTable *ST,KeyType key){
	ST->R[0].key = key;//0位置用来做为哨兵 
	int i;
	for(i = ST->length;ST->R[i].key != key;i--);
	return i;
}


int main() {//test
	
    return 0;
} 
