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
    int i, j, min_idx,no=0; 
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx]){
	          min_idx = j; 
		  }
          	no++;
	        swap(arr[min_idx], arr[i]);
	        cout<<"Iterasi ke "<<no<<" : "<<endl;
	        showArray(arr, n);
    } 
}

int main(){
  	int arr[] = {30, 50, 20, 10, 40};
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
