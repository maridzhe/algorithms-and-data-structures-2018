#include <iostream>
#include <stdlib.h>
using namespace std;

int Search_Binary (int arr[], int left, int right, int key)
{
	int midd = 0,qq=0;
	while (1)
	{
          qq++;
		midd = (left + right) / 2;
		
		if (key < arr[midd])     
			right = midd - 1;      
		else if (key > arr[midd]) 
			left = midd + 1;	   
		else     {    
            cout <<"Кiлькiсть запитiв : "<< qq << "\n";              
			return midd;  }
           

		if (left > right)        
			return -1;
			
	}
}

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
	setlocale (LC_ALL, "rus");
	
	const int SIZE = 100;
	int array[SIZE] = {};
	int key = 0;
	int index = 0;
	int qq=0;

	for (int i = 0; i < SIZE; i++) 
	{
		array[i] =rand()%SIZE;
	}
	
    ShellSort(SIZE, array);
		for (int i = 0; i < SIZE; i++) 
	{
		cout << array[i] << " | ";
	}
	
	cout << "\n\nВведите любое число: ";
	cin >> key;
	
    
	index = Search_Binary (array, 0, SIZE, key);
	if (index >= 0) 
		cout << "Указанное число находится в ячейке с индексом: " << index << "\n\n" ;
	else
		cout << "В массиве нет такого числа!\n\n";
		
	system("pause");
}
