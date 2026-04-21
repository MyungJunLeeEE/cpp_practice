// Sec12_pointer
// dynamic_memory

#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;      //declare dynamic
    cout << int_ptr << "\n";
    delete int_ptr;         // delete dynamic
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];     //array dynamic
    cout << temp_ptr<< endl;
    delete [] temp_ptr;
    
    return 0;
}