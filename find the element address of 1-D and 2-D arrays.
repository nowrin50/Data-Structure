#include<stdio.h>
int main () {
    
    int arr_1d [] = {1,2,3,4,5} ;
    int arr_1d_length = sizeof(arr_1d) / sizeof(arr_1d[0]) ;
    
    printf ("1-D Array:\n");
    for (int i=0; i< arr_1d_length;i++) {
        int value = arr_1d[i] ;
        printf ( "element %d has memory address: %p\n", value, (void*)&value) ;
    }
    
    int arr_2d [][3] = {{1,2,3}, {4,5,6},{7,8,9}} ;
    int arr_2d_rows = sizeof(arr_2d) / sizeof(arr_2d[0]);
    int arr_2d_cols = sizeof (arr_2d[0])/ sizeof (arr_2d[0][0]);
    
    printf ("\n2-D Array:\n");
    for (int i=0; i< arr_2d_rows; i++) {
        for (int j=0; j< arr_2d_cols; j++) {
            int value = arr_2d[i][j];
            printf ("Element %d at index (%d,%d) has memory address: %p\n", value, i,j, (void*) &value);
        }
    }
    return 0;
}

/* OUTPUT:  1-D Array:
element 1 has memory address: 0x7ffc9a276a7c
element 2 has memory address: 0x7ffc9a276a7c
element 3 has memory address: 0x7ffc9a276a7c
element 4 has memory address: 0x7ffc9a276a7c
element 5 has memory address: 0x7ffc9a276a7c

2-D Array:
Element 1 at index (0,0) has memory address: 0x7ffc9a276a78
Element 2 at index (0,1) has memory address: 0x7ffc9a276a78
Element 3 at index (0,2) has memory address: 0x7ffc9a276a78
Element 4 at index (1,0) has memory address: 0x7ffc9a276a78
Element 5 at index (1,1) has memory address: 0x7ffc9a276a78
Element 6 at index (1,2) has memory address: 0x7ffc9a276a78
Element 7 at index (2,0) has memory address: 0x7ffc9a276a78
Element 8 at index (2,1) has memory address: 0x7ffc9a276a78
Element 9 at index (2,2) has memory address: 0x7ffc9a276a78 */
