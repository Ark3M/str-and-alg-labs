#include <iostream> 
#include <cstring> 
#include <vector> 

using namespace std; 

template <typename T1>
T1 filling(vector <vector <T1>> &arr, T1 n, T1 m) 
{ 
	T1 num;
	cout << "Enter your matrix: " << endl;
	for (T1 i = 0; i < n; i ++ ) 
	{ 
		arr.push_back(vector<T1>());
		for ( T1 j = 0; j < m ; j ++ ) 
		{
			/*cin >> num;
			arr[i].push_back(num);*/ ???
		} 
	} 
} 

/*void filling(vector <vector <char>> &arr, int n, int m) 
{ 
	for (int i = 0; i < n ; i ++ ) 
	{ 
		arr.push_back(vector<char>()); 
		for ( int j = 0; j < m ; j++ ) 
		{ 
			arr[i].push_back(97+rand()%3);//25 
		} 
	} 
} */

template <typename T2>
T2 display(vector <vector <T2>> arr, T2 n, T2 m) 
{ 
	cout << "Your metrix: " << endl;
	for ( T2 i = 0 ; i < n ; i ++ ) 
	{ 
		cout << "\n"; 
		for ( T2 j = 0 ; j < m ; j ++ ) 
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
	cout << " 1 - matrix of numbers\n 2 - matrix of strings\n"; 
	cin >> key; 
	switch (key) 
	{ 
		case 1: 
		{ 
			int a; 
			vector <vector <int>> arr; 
			filling(arr,n,m); 
			display(arr,n,m); 
			cout << "Write symbol: "; 
			cin >> a; 
			int null,ii = 0; 
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
			display(arr,n,m); 
		break; 
		} 
		/*case 2: 
		{ 
			char a; 
			vector <vector <char>> arr; 
			filling(arr,n,m); 
			display(arr,n,m); 
			cout << "Write symbol: "; 
			cin >> a; 
			int ii = 0; 
			char null; 
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
			display(arr,n,m); 
		break; 
		}*/ 
		default: 
		{ 
			cout << "try again\n"; 
			break; 
		} 
	} 

return 0; 
}
