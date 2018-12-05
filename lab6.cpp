#include <iostream>
#include <string>

using namespace std;


int *input(int arr[], int n){
//check for array has correct size for input	
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



int *add(int arr[], int n){
	
    int i;
    int j = 0;
	int x;
	
	string s;
	
	int b[2*n]; 
	 
	cout << "Enter the number 'x': " << endl;
	cin >> x;	 

	for(int i = 0; i < n; i++) { 
		b[j] = arr[i]; 
		j += 1; 
		if(arr[i] < 0) { 
			b[j] = x; 
			j += 1; 
		}	 
	} 
	
	cout << "Original array: " << endl;

	for(int i = 0; i < n; i++) { 
		cout << arr[i] << " "; 
	} 
	
	cout << endl;
	
	cout << "Modified array: " << endl;

	for(int i = 0; i < j; i++) { 
		cout << b[i] << " ";
	} 
	
	cout << endl; 
        
	
	return b;
} 


int main(){
	
	
	int n = 0;
	int p;
	int i;
	int *arr = new int[n];
	
	cout << "Enter size of your array" << endl;
	cin >> n;
	
	do{
		cout << "1. Input array" << endl;
		cout << "2. Output array" << endl;
		cout << "3. Search number of the last minimal element in array" << endl;
		cout << "4. Adding the number 'x' after every negative element" << endl;
		cout << "5. Shut down" << endl;
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
				add(arr, n);
			break;
			
			case 5: 
				return 0;
			break;
		}
	}
	while(true);
    
    delete [] arr;
}
