#include <iostream>
#define MaxSize 10
using namespace std;

//静态分配
typedef struct {
	int data[MaxSize]; //静态存储数据元素
	int length; //用于记录当前顺序表长度
}SqlList;

//静态分配的初始化
void initList(SqlList& L)
{
	L.length = 0; //将顺序表的初始长度置为0
}
int main() {
	SqlList L1;
	initList(L1);
}
