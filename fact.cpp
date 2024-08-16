# include <iostream>
using namespace std;

long fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}

int main(){
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"the factorial of"<< n<<" is "<<fact(n)<<endl;
	return 0;
}
