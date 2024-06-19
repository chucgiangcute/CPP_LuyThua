// CPP_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "TINH LUY THUA\n";
	int so, somu, luythua = 1;
	cout << "Nhap so";
	cin >> so;
	cout << "Nhap mu";
	cin >> somu;
	for (int i = 0;i < somu;i++)
	{
		luythua *= so;
	}
	cout << "Luythua:" << luythua;
	
	return 0;
}

/*cout << "Luythua = " << pow(so, somu) << endl;*/
/*double tinhluythua(double a, double b) {
	double giatri = 1;
	for (int i = 1;i < b, i++) {
		giatri = giatri * a;
	}
	return giatri
}*/