// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int getPower(int x, int y) {
	if (y == 1) {
		return x;
	}
	else if(y == -1) {
		return 1 / x;
	}
	else if (y == 0) {
		return 1;
	}

	return y > 0 ? x*getPower(x, y - 1) : (1 / x)*getPower(x, y + 1);
}
double getPower(double x, double y) {
	if (y == 1) {
		return x;
	}
	else if (y == -1) {
		return 1 / x;
	}
	else if (y == 0) {
		return 1;
	}
	return y > 0 ? x*getPower(x, y - 1) : (1 / x)*getPower(x, y + 1);
}
int sumFunction(int x, int y) {
	return x + y;
}

int main()
{
	int a=0,m = 0;
	double b=0;
	
	cout << "��������a��Ϊ����:";
	cin >> a;
	cout << "����ʵ��b��Ϊ����:";
	cin >> b;
	cout << "��������m��Ϊָ��";
	cin >> m;

	cout << "a��m�η�Ϊ��" << getPower(a, m) <<"\n"<< "b��m�η�Ϊ:" << getPower(b, (double)m) << endl;
	cout << "�밴������˳�����...";
	cin >> m;
    return 0;
}