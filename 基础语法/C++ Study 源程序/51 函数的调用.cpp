#include <iostream>
using namespace std;

//定义加法函数
//在函数定义的时候，num1和num2并没有真实数据，它只是一个形式上的参数，简称形参
int add51(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int main51()
{
	//main函数中调用add函数
	int a = 10;
	int b = 20;
	
	//函数调用语法:函数名称 (参数)
	//a和b称为 实际参数，简称实参
	//当调用函数时候，实参的值会传递给形参
	int c=add51(a, b);
	cout << "c=" << c << endl;

	a = 100;
	b = 500;
	c = add51(a, b);
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}