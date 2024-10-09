#include <iostream>

using namespace std;

int main(void){
    int size, i, temp;

    cout << "Enter the size of the array: ";
    cin >> size;
    int* array = new int [size];

    for (int i = 0; i < size; i++){
        array[i] = i * 2;
    }



cout << "\nOG values : ";
    for(int* ptr = array; ptr < array + size; ptr++){
        cout << *ptr << " ";
    }

    cout << "\nModified array (each element +5):";
    for(int* ptr = array; array < ptr + size; array++){
        cout << *array + 5 << " ";
    }

temp = array[size-1];
   
   for(i=size-1;i>=0;i--)
    {
        array[i+1] =array[i]; 
    }
    array[0] = temp;
    cout << endl << temp;
    cout << "\nShift to the right: ";
 for(i=0;i<size;i++)
        cout << array[i] << " ";
    delete[] array;

    return 0;
}