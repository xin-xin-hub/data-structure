#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 80
typedef struct Chunk{
	char ch[MAXSIZE];//数据域 
	struct Chunk *next;//指针域 
}Chuck;

typedef struct{
	Chuck *head,*tail;//串的头指针和尾指针
	int curlen;//串长 
}LString;//字符串的块链结构 
 
int main() {//test

	
	return 0;
} 
