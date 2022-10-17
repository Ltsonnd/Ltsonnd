#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, d, v;
    cout << "Nhap a : ";cin >> a;
	cout << "Nhap b : ";cin >> b;
	cout << "Nhap c : ";cin >> c;
	d = sqrt(a*a+b*b+c*c);
	v = a*b*c;
    cout<<"duong cheo hinh hop chu nhat = "<<d<<endl;
    cout<<"the tich hinh hop chu nhat = "<<v;
    return 0;
}
