#include <iostream>
#include <ctime>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
 
void insertionSort(int *, int); 
 
int main(int argc, char* argv[])
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    system("color A");
    cout << "Insert\nВведите размер массива: ";
    int size_array; 
    cin >> size_array;
    if (size_array <= 0) {
        cerr << "\nInvalid size" << endl;
        return 1;
    }
    cout << "\nМассив заполняется, подождите..." <<endl;
    
 
    int *sorted_array = new int [size_array];
    for (int counter = 0; counter < size_array; counter++)
    {
        sorted_array[counter] = rand() % size_array; 
    }
    cout << "\n";
    
      clock_t t1 = clock();
 
    insertionSort(sorted_array, size_array); 
    
    clock_t t2 = clock();
 
    for (int counter = 0; counter < size_array; counter++)
    {
        cout << setw(2) << sorted_array[counter] << "  "; 
    }
    cout << "n";
    delete [] sorted_array;
    cout << "\n\nTime: " << (double) (t2-t1) / (double)CLOCKS_PER_SEC <<" sec." << '\n';
   std::cin.get();
   cout << "\ncreated by @amarsik1 feat. Inkognito\n" << endl;
    system("pause");
    return 0;
}
 
void insertionSort(int *arrayPtr, int length) 
{
    int temp,
        item; 
    for (int counter = 1; counter < length; counter++)
    {
        temp = arrayPtr[counter]; 
        item = counter-1; 
        while(item >= 0 && arrayPtr[item] > temp) 
        {
            arrayPtr[item + 1] = arrayPtr[item];
            arrayPtr[item] = temp;
            item--;
        }
    }
    
}
