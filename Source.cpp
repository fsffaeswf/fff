#include <iostream>
using namespace std;
int main() {
	/*1
	int sum = 0;
	for (int i = 1; i <= 10;i++) {
		float a;
		cin >> a;
		sum += a;

	}
	cout << sum;*/

	/*2
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		float a;
		cin >> a;
		sum *= a;

	}
	cout << sum;*/

	/*3
	int sum = 0;
	int k = 0;
	for (int i = 1; i <= 10; i++) {
		float a;
		cin >> a;
		sum += a;
	}
	float sr = (float)sum / 10;
	cout << sr;*/

	/*4
	int N;
	float sum = 0;
	float proiz = 1;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		float a;
		cin >> a;
		sum += a;
		proiz *= a;
	}
	cout << sum << ' ' << proiz;
	}*/

	
	/*5
	int N;
	cin >> N;
	float sum = 0;
	for (int i = 1; i <= N; i++) {
		float a;
		cin >> a;
		a = (int)a;
		cout <<':'<< a<<endl;
		sum += a;
	}
	cout<<sum;*/

	
	/*6
	int N;
	float sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		float a;
		cin >> a;
		a = a - int(a);
		cout << ':' << a << endl;
		sum+=a;
	}
	cout << sum;*/


}
