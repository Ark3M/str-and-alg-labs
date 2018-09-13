#include <iostream>
#include <ctime>
using namespace std;

int main(){

	srand(time(NULL));

	int n = 0, m = 0;
	int a[n][m];
	
	cout << "Enter number of lines and columns:" << endl;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			a[i][j] = rand() % 20;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

}
