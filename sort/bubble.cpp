#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main(void)
{
  system("color A");
setlocale(LC_ALL, "rus");
int *arr; 
    int size; 
    
    cout << "Bubble\nВведите размер массива: ";
    cin >> size;
     cout << "\nМассив заполняется, подождите..." <<endl;
    if (size <= 0) {
        cerr << "Invalid size" << endl;
        return 1;
    }

    arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i]=rand()%size;
    }

    int temp; 
    
   clock_t t1 = clock();
   
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
     clock_t t2 = clock();
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr; 
  
   cout << "\n\nTime: " << (double) (t2-t1) / (double)CLOCKS_PER_SEC <<" sec." << '\n';
   std::cin.get();
   cout << "\ncreated by @amarsik1 feat. Inkognito\n" << endl;
   system("pause");
   return 0;
   }
