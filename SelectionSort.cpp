#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int &a, int &b) 
{ 
    int temp = a; 
    a = b; 
    b = temp; 
}

void showArray(int arr[], int size)
{ 
    int i;
    for (i=0; i < size; i++)
	cout<<arr[i]<<", ";
	cout<<endl<<endl;
}

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx]){
	          cout<<"Iterasi ke "<<i+1<<" : "<<endl;
	          showArray(arr, n);
	            min_idx = j; 
	        swap(arr[min_idx], arr[i]); 
		  }
    } 
}

int main(){
  	int arr[] = {5, 1, 12, 2, 12};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"PENGURUTAN DENGAN SELECTION SORT"<<endl;
    cout<<"================================"<<endl; 
	cout<<"Sebelum diurutkan :"<<endl;
	showArray(arr,n);
	cout<<endl;
	selectionSort(arr, n);
	cout<<"Setelah dilakukan selection sort: "<<endl;
	showArray(arr, n); 
	return 0;
}
