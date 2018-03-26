#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define MAX 100000
 using namespace std;
void printPairs(int arr[], int arr_size, int sum)
{
  int i, temp;
  bool binMap[MAX] = {0}; 
 
  for (i = 0; i < arr_size; i++)
  {
      temp = sum - arr[i];
      if (temp >= 0 && binMap[temp] == 1)
         printf("Suma %d ye (%d, %d) \n", 
                 sum, arr[i], temp);
      binMap[arr[i]] = 1;
  }
  
    system("pause");
}
 
int main()
{
    int A[] = {5, 2, 4, 3, 7, 10};
    int n;
    cout << "Vvedit` X : ";
    cin >> n;
    int arr_size = sizeof(A)/sizeof(A[0]);
 
    printPairs(A, arr_size, n);
 
    getchar();
    return 0;
    system("pause");
}
