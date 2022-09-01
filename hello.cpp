#include<iostream>
using namespace std;
void bubbleSort(int *A, int n){
    int temp;
    for (int i = 0; i < n-1; i++) 
    {

        for (int j = 0; j <n-1-i ; j++)
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp; 
            }
        }  
    } 
}
int binarySearch(int *arr, int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
   
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
int main(){
	int n;
	cout<<"enter size of array"<<endl;
	
	cin>>n;
	int a[n];
	
	cout<<"enter elements of array";
	try{
	
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
}
catch (...){
	cout<<"please insert valid input";
}
	bubbleSort(a,n);
	cout<<"enter element to find index number ";
	int s;
	cin>>s;
	try{
	int j=binarySearch(a,n,s);
	cout<<s;
//	if(!int j){
//		throw j;
//	}
//	catch(auto j){
//		cout<<"no element found"
//	}
}
	cout<<"index number of "<<s<<" is "<<j<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
}
