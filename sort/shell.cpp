#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
  using namespace std;
void ShellSort(int n, int arr[])
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = arr[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < arr[j - step])
                    arr[j] = arr[j - step];
                else
                    break;
            }
            arr[j] = tmp;
        }
}
 
int main()
{
	 system("color A");
	setlocale(LC_ALL, "rus");
   int size;
   int *arr;
   cout << "Shell\nВведите размер массива: ";
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
    clock_t t1 = clock();
    ShellSort(size, arr);
    clock_t t2 = clock();
    printf("\nSorted array:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    cout << "\n\nTime: " << (double) (t2-t1) / (double)CLOCKS_PER_SEC <<" sec." << '\n';
   std::cin.get();
   cout << "\ncreated by @amarsik1 feat. Inkognito\n" << endl;
    _getch();
    return 0;
}
