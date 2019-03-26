#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n)
	{
		//需要注意n*(n+1)可能会越界所以先除2 
		if(n%2==0)
			cout<<(n/2)*(n+1)<<endl<<endl;
		else
			cout<<((n+1)/2)*n<<endl<<endl;
	}
	return 0;
} 



