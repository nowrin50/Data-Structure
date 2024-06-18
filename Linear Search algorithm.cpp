#include<iostream>
using namespace std;
int main () {
    
    int a[10]={0} ;
    int n;
    
    cout <<"enter number of element:" ;
    cin >> n;
    
    cout <<" enter elements:";
    for (int i=0; i<n ; i++ ) {
        cin >> a[i] ;
    }
    
    int item ;
    cout <<"enter item to search";
    cin >> item;
    
    bool found = false ; // check whether the item is found or not
    
    for (int i= 0 ; i<10; i++) { // line 24- 30 Linear Algorithm 
        
        if (item == a[i]) {
            
            cout << "item found at loc"<< i + 1 <<endl ;
            i++; 
            found = true ;
            break ;
        }
    }
    if (!found) {
        cout <<" Item does not exist" <<endl ;
    }
    return 0; 
}
