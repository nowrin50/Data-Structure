
#include<iostream>
using namespace std;

int binary_search (int arr[], int low, int high, int item) {  // Binary Search Function 
    while (low <= high) {
        int mid = low + (high - low) /2 ;
         if (arr[mid]= item) {
             return mid ;
         }
         else if (arr[mid] < item ) {
             low = mid + 1 ;
         }
         else {
             high = mid -1 ;
         }
    }
    return -1 ;
    
} // end of binary search algorithm function 

int main () {
    int n ;
    cout << "enter the number of elements in array:" ;
    cin >> n;
    
    int a[n] ; 
    cout <<"enter elements (in ascending order):";
    cin >> a[n];
    
    int item ;
    cout << "enter item to search:" ;
    cin >> item ;
    
    int index = binary_search (a, 0, n-1, item) ; // Binary Search Function call 
      if (index!= -1) {
          cout << "item found at location" << index + 1 << endl ;
    }
    else {
        cout << "item does not exist: " <<endl ; 
    }
    return 0; 
}
