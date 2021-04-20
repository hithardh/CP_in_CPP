#include<iostream>
using namespace std;

int main(){
	int N;
	cout<<"Enter the N value:";
	cin>>N;
	int t=0;
	for(int i=1;i<=N;i++){
		for(int k=t;k<N;k++){
			cout<<" ";
		}
		t=0;
		for(int j=0;j<i;j++){
			cout<<" *";
			t++;
		}
		cout<<endl;
	}
	return 0;
}
