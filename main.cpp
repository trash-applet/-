#include <iostream>
#include <stdlib.h>

using namespace std;

//������Ĭ��ֵ
//int func(int a, int b = 20/*Ĭ��ֵ20*/, int c)//�����ԭ����bĬ��ֵ��,���涼Ҫ��Ĭ��ֵ
int func(int a, int b = 20/*Ĭ��ֵ20*/, int c = 30)
{
	return a + b + c;
}

//2.
//���������Ĭ��ֵ�ˣ���ô�������βξͲ���дĬ��ֵ��
int func1(int a = 10, int b = 10);
int func1(int a, int b)
{
	return a + b;
}
//ͬ�ϻ���
int func2(int a, int b);
int func2(int a = 10, int b = 10)
{
	return a + b;
}
int main(void)
{
	cout << func(10) << endl;; //��Ĭ��ֵ�ĺ����βο��Բ�д
	cout << func(10, 10) << endl;; //����һ��
    //2.
	cout << func1(); //Ĭ��
	cout << func1(20, 20);
	
	cout << func2(); //Ĭ��
	cout << func2(20, 20);
	return 0;
}