#include <iostream>
#include <stdlib.h>

using namespace std;

//函数的默认值
//int func(int a, int b = 20/*默认值20*/, int c)//报错的原因是b默认值后,后面都要有默认值
int func(int a, int b = 20/*默认值20*/, int c = 30)
{
	return a + b + c;
}

//2.
//如果声明有默认值了，那么函数的形参就不能写默认值了
int func1(int a = 10, int b = 10);
int func1(int a, int b)
{
	return a + b;
}
//同上还有
int func2(int a, int b);
int func2(int a = 10, int b = 10)
{
	return a + b;
}
int main(void)
{
	cout << func(10) << endl;; //有默认值的函数形参可以不写
	cout << func(10, 10) << endl;; //上述一样
    //2.
	cout << func1(); //默认
	cout << func1(20, 20);
	
	cout << func2(); //默认
	cout << func2(20, 20);
	return 0;
}