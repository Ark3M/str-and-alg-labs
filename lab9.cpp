#include <iostream> 
#include <cstring> 
#include <vector> 

using namespace std; 

template <typename T1, typename T2>
T2 filling(vector <vector <T2> > &arr, T1 n, T1 m) 
{ 
	T2 num;
	cout << "Enter your matrix: " << endl;
	for (T1 i = 0; i < n; i ++ ) 
	{ 
		arr.push_back(vector<T2>());
		for ( T1 j = 0; j < m ; j ++ ) 
		{
			cin >> num;
			arr[i].push_back(num);
		} 
	} 
} 

template <typename T1, typename T2>
T1 sort(vector <vector <T1> > &arr, T1 a, T2 n, T2 m)
{
			
			T1 null;
			int ii = 0; 
			int jj = 0; 
			for ( int i = 0 ; i < n ; i ++ ) 
			{ 
				for ( int j = 0 ; j < m ; j ++ ) 
					if ( arr[i][j] == a ) 
					{ 
						null = arr[i][j]; 
						arr[i][j] = arr[ii][jj]; 
						arr[ii][jj] = null; 
						ii ++; 
						if ( ii == n ) 
						{ 
							ii = 0; 
							jj++; 
						} 
					} 
			}
}

template <typename T1, typename T2>
T2 display(vector <vector <T2> > arr, T1 n, T1 m) 
{ 
	cout << "Your metrix: " << endl;
	for ( T1 i = 0 ; i < n ; i ++ ) 
	{ 
		cout << "\n"; 
		for ( T1 j = 0 ; j < m ; j ++ ) 
			cout << arr[i][j] << " "; 
	} 
} 

/*void display(vector <vector <char>> arr, int n, int m) 
{ 
	for ( int i = 0 ; i < n ; i ++ ) 
	{ 
		cout << "\n"; 
		for ( int j = 0 ; j < m ; j ++ ) 
			cout << arr[i][j] << " "; 
	} 
} */

int main() 
{ 
	int n,m,key; 
	cout << "Write number of strings\n"; 
	cin >> n; 
	cout << "Write number of columns\n"; 
	cin >> m; 
	cout << " 1 - matrix of numbers\n 2 - matrix of strings\n 3 - matrix of float\n"; 
	cin >> key; 
	switch (key) 
	{ 
		case 1: 
		{ 
			int a; 
			vector <vector <int> > arr; 
			filling(arr,n,m); 
			display(arr,n,m); 
			cout << "Write symbol: "; 
			cin >> a; 
			sort(arr, a, n, m);
			display(arr,n,m); 
		break; 
		} 
		case 2: 
		{ 
			char a; 
			vector <vector <char> > arr; 
			filling(arr,n,m); 
			display(arr,n,m); 
			cout << "Write symbol: "; 
			cin >> a; 
			sort(arr, a, n, m);
			display(arr,n,m); 
		break; 
		}
		case 3: 
		{ 
			float a; 
			vector <vector <float> > arr; 
			filling(arr,n,m); 
			display(arr,n,m); 
			cout << "Write symbol: "; 
			cin >> a; 
			sort(arr, a, n, m);
			display(arr,n,m); 
		break; 
		}
		default: 
		{ 
			cout << "try again\n"; 
			break; 
		} 
	} 

return 0; 
}
