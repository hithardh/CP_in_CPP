#include<iostream>
using namespace std;

int main(){
	int N;
	cout<<"Enter the N value:";
	cin>>N;
	for(int i=0;i<N;i++){
		for(int j=0;j<(N-i-1);j++)
		cout<<"  ";
		for(int k=0;k<i+1;k++)
		cout<<"* ";
		
		cout<<endl;
	}
	return  0;
	}
