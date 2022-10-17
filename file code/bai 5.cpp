#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k,i,j;
	cout << "Nhap n: ";cin >> n;
    cout << "Nhap k: ";cin >> k;
    for(i=n;i<=k;i++)
    {
    	for(j=n;j<=k;j++)
    	cout<<j*i<<"\t"; 
        cout<<"\n";
	}
    return 0;
}
