
#include <iostream>
#include <string>

using namespace std;


int *input(int arr[], int n){
	
	if(n <= 100){
		
		cout << "Enter your array:" << endl;
		for (int i = 0; i < n; i++){
        	cin >> arr[i];
    	}
	}
	else{
		return 0;
	}
	return arr;
}


int *output(int arr[], int n){
	
	for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    return arr;
}


int search(int arr[], int n){

    int minIndex;
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] <= min){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}


/* 
int add(int arr[], int n){
    int i, x;
    int neg = arr[i];
    if(neg < 0){
        for(int i = 0; i < n; i++){
            arr[i+1] = arr[i];
            arr[neg] = x;
        }
    }
    return x;
} 
*/

int main(){
	
	int n = 0;
	// int x = 0; //
	int p;
	int i;
	int *arr = new int[n];
	
	cout << "Enter size of your array" << endl;
	cin >> n;
	
	do{
		cout << "1. Input array" << endl;
		cout << "2. Output array" << endl;
		cout << "3. Search number of the last minimal element in array" << endl;
		cout << "4. Shut down" << endl;
		cout << "Specify the menu item:" << endl;
		
		cin >> p;
		
		switch(p){
			
			case 1: 
				input(arr, n);
			break;
			
			case 2: 
				cout << "Array:" << endl;
				output(arr, n);
			break;
			
			case 3:
				cout << "Number of the last minimal element in array:" << search(arr, n) << endl;
			break;
			
			case 4: 
				return 0;
			break;
		}
	}
	while(true);
    
	/*
	cout << "Enter array size:" << endl;
	cin >> n;
	cout << "Enter number <x>" << endl;
	cin >> x;
	*/

	/*
    if(n <= 100){
        int *arr = new int[n];
         
		cout << "Enter your array:" << endl;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        search(arr, n);
        // add(arr, n); //
        cout << "Your array is:" << endl;
        for (int i = 0; i < n; i++){
            cout << arr[i] << endl;
        }
        cout << "Number of least element in array:" << endl;
        cout << search(arr, n) << endl; 
		
        delete [] arr;
    }
    else{
        return 0;
    }
    */
    delete [] arr;
}
