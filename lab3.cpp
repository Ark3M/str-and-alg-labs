#include <iostream>
#include <ctime>
using namespace std;

int main(){

	srand(time(0));

	int n = 0, m = 0;
	int max = 0;
	int x;
	int maxc;

	cout << "Enter number of lines and columns:" << endl;
	cin >> n;
	cin >> m;
    int a[n][m];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			x = rand() % 20;
			a[i][j] = x;
			if (x > max){
				max = x;
				maxc = j;

			}
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++){
		for (int j = maxc + 1; j < m; j++){
			a[i][j-1] = a[i][j];
		}
	}

	cout << endl;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m - 1; j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
