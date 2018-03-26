#include <iostream>
#include <stdlib.h>
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
int main(){
    system("color A");
    const int N=20;
    int arr[N];
    
    for(int i=0;i<N;i++)
    arr[i]=rand()%50;
    
    ShellSort(N, arr);
    
    
    for(int i=0;i<N;i++)
    cout << arr[i] << " ";
    
      int seek;
    cout <<"\n\t\tVvedit chislo:";
    cin >> seek;
    
   
  
    for(int i=0;i<N;i++)
    if(seek==arr[i])
    cout << "\nPoryadkovuy nomer = " << i;
    else
    
    

    cout << endl;
   system("pause"); 
    
    }
