#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse_interval(vector<int>&vec,int k){
	int n=vec.size();
	for(int i=0;i<n;i+=k)
		if(i<=n-k)
		reverse(vec.begin()+i,vec.begin()+i+k);
		else reverse(vec.begin()+i,vec.end());
	
}


void print(vector<int>&vec){
	int n=vec.size();
	for(int i=0;i<n;i++)
	cout<<vec[i]<<" ";
	cout<<endl;
}

int main(){
	int n,temp;
	vector<int>vec;
	cout<<"Enter array size : ";cin>>n;
	
	cout<<"Enter "<<n<<" elements of vector : ";
	for(int i=1;i<=n;i++){
		cin>>temp;
		vec.push_back(temp);
	} 
	
	cout<<"vector you entered : \n";
	print(vec);
	
	int k;
	cout<<"Enter number on which interval, vector is to be reversed : ";cin>>k;
	
     reverse_interval(vec,k);
     
     cout<<"Vector after reversing on intervals:\n";
     print(vec);
     return 0;
}
