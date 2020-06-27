#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int &a, int &b) 
{ 
    int temp = a; 
    a = b; 
    b = temp; 
}

void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        swap(arr[min_idx], arr[i]); 
    } 
}

void showArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++)
	cout<<arr[i]<<", ";
	cout<<endl;
}

int main(){
  	int arr[] = {5, 1, 12, -5, 16, 2, 12, 14};
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout<<"Sebelum diurutkan :"<<endl;
	showArray(arr,n);
	cout<<endl;
	selectionSort(arr, n);
	cout<<"Setelah dilakukan selection sort: "<<endl;
	showArray(arr, n); 
	return 0;
}
