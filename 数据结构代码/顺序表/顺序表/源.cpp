#include <iostream>
#define MaxSize 10
using namespace std;

//��̬����
typedef struct {
	int data[MaxSize]; //��̬�洢����Ԫ��
	int length; //���ڼ�¼��ǰ˳�����
}SqlList;

//��̬����ĳ�ʼ��
void initList(SqlList& L)
{
	L.length = 0; //��˳���ĳ�ʼ������Ϊ0
}
int main() {
	SqlList L1;
	initList(L1);
}
