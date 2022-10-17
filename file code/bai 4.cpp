#include <iostream>
#include <cmath>
using namespace std;
int BS(int n,int N)
{
	do
	{
		cout << "Nhap n: ";cin >> n;
		cout << "Nhap N: ";cin >> N;
		if(n>N)
		cout<<"nhap lai n < N"<<endl;	
	}while(n>N);
	if(n > 0){
		cout<<"cac boi so cua "<<n<<" nho hon "<<N<<" la : ";
		for(int i =0; i<N; i++)
		{
			if(i%n==0)
			cout<<i<<" "; 
		}
	}else 
	cout<<"nhap so nguyen duong "<<endl;		
}
int main()
{
    int n,N;    
    BS(n,N);
    return 0;
}
