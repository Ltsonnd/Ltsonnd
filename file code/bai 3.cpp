#include <iostream>
#include <cmath>
using namespace std;
float tong(float x, float n)
{
	int i;
    float S, T;
    long M;
    S = 0;
	M = 1;  
    for(i = 1;i <= n;i++)
    {
        T = pow(x, i);
        M = i * M;
        S = S + pow((-1),i) * T/M;    
    }
    return S;
}
int main()
{
    int n;float x;
    cout << "Nhap x: ";cin >> x;
	cout << "Nhap n: ";cin >> n;
    cout<<"Tong = "<<tong(x,n);
    return 0;}
