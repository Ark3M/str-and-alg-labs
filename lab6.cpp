#include <iostream>
#include <string>

using namespace std;

/* string rus(char s[]){

	string t;
	t = s;
	int i = 0;

	while(s[i] != 0){
		if(s[i] >= 'А' && s[i] <= 'п') t[i] -= 64;

		if(s[i] >= 'р' && s[i] <= 'я') t[i] -= 16;

        if(s[i] == 'Ё') t[i] = 240;

        if(s[i] == 'ё') t[i] = 241;

		i++;}
	return t;
} */


 /* int input(int a[], int &n){

	int n = 0;

	cout << "Enter array size:" << endl;
	cin >> n >> endl;

	if(n <= 100){
		int *arr = new int[n];

		for (int i = 0; i < n; i++){
			cin >> arr[i] >> endl;
		}

		for (int i = 0; i < n; i++){
			cout << arr[i] << endl;
		}
		delete [] arr;
	}
} */


/* int output(int a[], int n){

	int n;
	
	for(int i = 0; i < n; i++){
		cout << a[i];	
	}
	cout << endl;
} */



int main(){

	/* int p;
	
	do{
		cout << "1. Input array" << endl;
		cout << "2. Output array" << endl;
		cout << "3. Shut down" << endl;
		cout << "Specify the menu item:" << endl;

		cin >> p >> endl;

		switch(p){

			case 1: 
				input(a, n);
			break;

			case 2: 
				cout << "Array:" << endl;
				output(a, n);
			break;

			case 3: 
				return 0;
		}
	} */

	int n = 0;

	cout << "Enter array size:" << endl;
	cin >> n;

	if(n <= 100){
        	int *arr = new int[n];
		
		cout << "Enter your array:" << endl;
        	for (int i = 0; i < n; i++){
            		cin >> arr[i];
        	}

		cout << "Your array is:" << endl;	
        	for (int i = 0; i < n; i++){
            		cout << arr[i] << endl;
        	}
        	delete [] arr;
    	}
    	else{
        	return 0;
    	}
}


