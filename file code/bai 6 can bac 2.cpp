#include<iostream>
#include<cmath>
using namespace std;
float tong(int n)
{
	float S;
    S = sqrt(2);
    for(int i = 2; i <= n; i++)
     S = sqrt(2 + S);
    cout<<"tong S = "<<S;
    return S;
}
int main()
{
    int n;
    cout<<"nhap n = ";cin>>n;
    tong(n);
    return 0;
}
