#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//8
	/*for (int i = 20; i <= 50;i++) {
		if (i%3==0 and i%5!=0) {
			cout << i << endl;
		}
	}*/
	//9
	/*for (int i = 35; i <= 87; i++) {
		if (i % 7 == 1 or i % 7 == 2 or i % 7 == 5) {
			cout << i << endl;
		}
	}*/
	//10
	/*int sum = 0;
	for (int i = 1; i <= 50; i++) {
		if (i % 7 == 0 or i % 5 == 0) {
			sum=sum+ i;
		}
	}
	cout << sum << endl;*/
	//11
	/*for (int i = 10; i <= 99; i++) {
		if (i % 4 == 0 and i % 6 != 0) {
			cout << i << endl;
		}
	}*/
	//12
	/*int proizv = 1;
	for (int i = 10; i <= 99; i++) {
		if (i % 2 != 0 and i % 13 == 0) {
			proizv = proizv * i;
		}
	}
	cout << proizv << endl;*/
	//13
	/*int sum = 0;
	for (int i = 100; i <= 200; i++) {
		if (i % 17 == 0) {
			sum = sum + i;
		}
	}
	cout << sum << endl;*/
	//14
	/*int N;
	cin >> N;
	int sum = 0;
	for (int i = 1; i <= N; i++) {
			sum = sum + i*i;
	}
	cout << sum << endl;*/
	//16
	/*float n,m;
	cin >> n >> m;
	int sum = 0;
	int m1 = m * 60;
	for (int i = 1; i <= n; i++) {
		sum = sum + m1;
		m1 = m1 + 10;
	}
	cout << sum/60 << endl;*/
	//17
	/*float n,n1,sr;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> n1;
		sum = sum + n1;
	}
	sr = sum / n;
	cout <<sr<< endl;*/
	//18
	/*int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0 and i % 3 != 0 and i%5 !=0) {
			sum++;
		}
	}
	cout << sum << endl;*/
	//19
	return 0;
}