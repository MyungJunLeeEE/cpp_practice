#include <iostream>

using namespace std;

void print(int * arr, int size){
    for (size_t i{0}; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int *apply_all(int * arr1, size_t size1, int * arr2, size_t size2){
    int *tmp_ptr {nullptr};
    int tmpsize {size1*size2};
    int count {0};
    tmp_ptr = new int[tmpsize];
    
    for (size_t i{0}; i < size1; i++){
        for (size_t j{0}; j < size2; j++){
            *(tmp_ptr + count) = *(arr1+i) * *(arr2+j);
            count++;
        }

    }
    
    return tmp_ptr;
    
}

int main() {
    
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};
    
    cout << "Array 1 : ";
    print(array1, array1_size);
    
    cout << "Array 2 : ";
    print(array2, array2_size);
    
    int *result = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t result_size {array1_size * array2_size};   // c;cu;ate on compile
    
    cout << "Result: " << endl;
    print(result, result_size);
    
    
    return 0;
}