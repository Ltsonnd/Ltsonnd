#include<iostream>
#include<cmath>
#define MAX 100
using namespace std;
void nhap(int a[], int n)
{
    for (int i=0; i<n; i++){
    cout<<"A["<<i+1<<"]= "; cin>>a[i];
}
}
void xuat(int a[], int n)
{
    for (int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
    	if (max < a[i])
        max = a[i];
	} 
    return max;
}
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
    	if (min > a[i])
    	min = a[i];
	}             
    return min;
}
void ThemPhanTu(int a[], int &n, int val, int pos){
    if(n >= MAX){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos > n){
        pos = n;
    }
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = val;
    ++n;
}
void XoaPhanTu(int a[], int &n, int pos){
    if(n <= 0){
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos >= n){
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){
        a[i] = a[i+1];
    }--n;
}
void menu(){
	int a[20], n;
	int val, pos;
    cout<<"Nhap n = "; cin>>n;
    nhap(a,n);
    cout<<"cac phan tu mang A la: ";
    xuat(a,n);
    int lc;
	do{
		cout<<"\nmenu \n1 tim SLN \n2 tim SNN \n3 xoa pt tai pos \n4 them pt tai pos \n0 thoat"<<endl;
		cout<<"ban chon la ";cin>>lc;
		switch(lc){
			case 0:break;
			case 1:{
				cout<<"\nGIA TRI LON NHAT LA "<< max(a, n)<<endl;
				break;
			}
			case 2:{
				cout<<"\nGIA TRI NHO NHAT LA "<< min(a, n)<<endl;
				break;
			}
			case 3:{
				cout<<"\n-------XOA PHAN TU-------\n";
				cout<<"\nNhap vi tri muon xoa: ";cin>>pos;
				XoaPhanTu(a, n, pos);
				cout<<"\nMang sau khi xoa: ";
				xuat(a,n);
				break;
			}
			case 4:{
				cout<<"\n-------THEM PHAN TU--------\n";
				cout<<"\nNhap so can them: ";cin>>val;
				cout<<"\nNhap vi tri muon them: ";cin>>pos;
				ThemPhanTu(a, n, val, pos);
				cout<<"\nMang sau khi xoa: ";
				xuat(a,n);
				break;
			}
			default: cout<<"hay nhap lai "<<endl;
		}
	} while(lc);//lc!=0
}
int main()
{
    menu();
    return 0;
}
