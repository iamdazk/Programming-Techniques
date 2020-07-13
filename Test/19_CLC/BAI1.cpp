#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

string a,b,c;
vector<string> arr;

void result();

int main(){

	cin >> a >> b >> c;

	result();

	return 0;
}

void result(){

	string temp = "";

	long long _min = min(a.length(),min(b.length(),c.length()));
	//cout << _min;
	if(_min == a.length()) 
		arr.push_back(a);
	if(_min == b.length()) 
		arr.push_back(b);
	if(_min == c.length()) 
		arr.push_back(c);



	if(arr.size() == 3){
		temp = min(a,min(b,c));
	}
	else if(arr.size() == 1) 
		temp = arr[0];
	else{
		temp = min(arr[0],arr[1]);
	}

	cout << temp;
}