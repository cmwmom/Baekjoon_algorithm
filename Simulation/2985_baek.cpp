#include<bits/stdc++.h>
using namespace std;

void func(int a, int b, int c){
	if(a + b == c){
		cout << a << "+" << b << "=" << c;
		return;
	}
	else if(a - b == c){
		cout << a << "-" << b << "=" << c;
		return;
	}
	else if(a * b == c){
		cout << a << "*" << b << "=" << c;
		return;
	}
	else if(a / b == c){
		cout << a << "/" << b << "=" << c;
		return;
	}
	else if(b + c == a){
		cout << a << "=" << b << "+" << c;
		return;
	}
	else if(b - c == a){
		cout << a << "=" << b << "-" << c;
		return;
	}
	else if(b * c == a){
		cout << a << "=" << b << "*" << c;
		return;
	}
	else if(b / c == a){
		cout << a << "=" << b << "/" << c;
		return;
	}
	
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	
	func(a, b, c);
	return 0;
}