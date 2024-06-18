#include<iostream>
using namespace std;

void moveDisks (int num_disks, char source_rod, char destination_rod, char auxiliary_rod)

{
    
    if (num_disks == 0) {
        return ;
    }
    //The first recursive call moves num_disks - 1 disks from the source_rod to the auxiliary_rod, using the destination_rod as an auxiliary rod.
    moveDisks (num_disks -1, source_rod, auxiliary_rod, destination_rod) ;
    
    cout << "Move disk" << num_disks << "From rod" << source_rod << "To road" <<destination_rod <<endl ; 
    //second recursive call moves the remaining num_disks - 1 disks from the auxiliary_rod to the destination_rod, using the source_rod as an auxiliary rod.
    moveDisks (num_disks -1, auxiliary_rod, destination_rod, source_rod) ;
}

int main () {
    int num_disks = 4;
    moveDisks (num_disks, 'A','C', 'B');
    return 0; 
}
