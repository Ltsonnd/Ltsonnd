#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
    for (int i=0; i<n; i++)//i vi tri phan tu trong mang
    {
        cout<<"a["<<i+1<<"]= "; cin>>a[i];
    }
}
void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int timvt(int *a, int n, int x) {
	cout << "phan tu can tim la ";cin >> x;
	for(int i = 0; i < n; i++) 
	{
		if(a[i] == x) 
		cout<<"vi tri phan tu vua nhap la "<<i+1<<endl;	
	}
	return 0;
}
int main() {
	int a[20], n, x;
    cout<<"Nhap n = "; cin>>n;nhap(a,n);
    cout<<"cac phan tu mang A la: ";xuat(a,n);
    cout<<endl;timvt(a, n, x);
	return 0;
}

