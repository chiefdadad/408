#include<iostream>
#define InitSize 10 //设置初始最大长度
using namespace std;

//动态分配
typedef struct {
	int* data; //指示动态分配数组的指针
	int MaxSize; //最大长度
	int length;
}SqlList;

//初始化
void initList(SqlList& L)
{
	L.data = new int[InitSize];
	L.length = 0;
	L.MaxSize = InitSize;
}

//增加动态数组的长度
void increaseSize(SqlList& L, int len)
{
	int* p = L.data; //使用指针p来存储原来数组中的内容
	L.data = new int[L.MaxSize + len]; //申请新的内存空间
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i]; //将数据复制到新的内存空间去
	}
	L.MaxSize = L.MaxSize + len;
	delete[] p; //释放原来的内存空间
}

int main() {
	SqlList L;
	initList(L);
	increaseSize(L, 5);

	return 0;
}