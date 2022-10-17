#include <iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap a["<<i+1<<"] = ";
		cin>>a[i];
	}}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<" "<<a[i];
}
void ptln(int a[],int n)
{
int max,dem,s;
max = 1;
for (int i = 0; i < n; i++) 
{
	dem = 0;
	for (int j = 0; j < n; j++)	
	{
		if (a[i] == a[j]) 
		dem++;
	}
	if (max < dem)
	{
		max = dem;
		s = a[i];
	}
}
cout<<"\nso xuat hien nhieu nhat la "<<s<<" voi ("<<max<<") lan";
}
int main() {
	int a[20];
	int n;
	cout<<"Nhap n : ";cin>>n;	
	cout<<endl;
	nhap(a,n);
	cout<<"\nMang vua nhap la: ";
	xuat(a,n);
	cout<<endl;
	ptln(a,n);
	return 0;
}
