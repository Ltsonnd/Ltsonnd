#include<iostream>
using namespace std;

void NhapMang(int a[], int n)
{
	int *p=a;
    for(int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> p[i];
    }
}
void XuatMang(int a[], int n)
{
	int *p=a;
    for(int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}
int main()
{
    int a[20] ;
    int n;
    cout << "Nhap n = ";cin >> n;
    NhapMang(a, n);
    cout<<"Mang vua nhap la : ";
    XuatMang(a, n);
    return 0;
}
