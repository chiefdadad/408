#include<iostream>
#define InitSize 10 //���ó�ʼ��󳤶�
using namespace std;

//��̬����
typedef struct {
	int* data; //ָʾ��̬���������ָ��
	int MaxSize; //��󳤶�
	int length;
}SqlList;

//��ʼ��
void initList(SqlList& L)
{
	L.data = new int[InitSize];
	L.length = 0;
	L.MaxSize = InitSize;
}

//���Ӷ�̬����ĳ���
void increaseSize(SqlList& L, int len)
{
	int* p = L.data; //ʹ��ָ��p���洢ԭ�������е�����
	L.data = new int[L.MaxSize + len]; //�����µ��ڴ�ռ�
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i]; //�����ݸ��Ƶ��µ��ڴ�ռ�ȥ
	}
	L.MaxSize = L.MaxSize + len;
	delete[] p; //�ͷ�ԭ�����ڴ�ռ�
}

int main() {
	SqlList L;
	initList(L);
	increaseSize(L, 5);

	return 0;
}