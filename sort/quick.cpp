#include <iostream>
using namespace std;

void print(int *a, int n)
{
    int i=0;
    while(i<n){
        cout<<a[i]<<",";
        i++;
    }
}

void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;
    //cout<<"QS:"<<left<<","<<right<<"\n";

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}


int main() {
    setlocale(LC_ALL, "rus");
    system("color A");
    int size;
    cout << "QuickSort\n¬ведите размер массива: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i]=rand()%size;
    }
     clock_t t1 = clock();
    quicksort(arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);
     
     
  clock_t t2 = clock();
    print(arr, (sizeof(arr)/sizeof(arr[0])));
    
    cout << "\n\nTime: " << (double) (t2-t1) / (double)CLOCKS_PER_SEC <<" sec." << '\n';
    std::cin.get();
      cout << "\ncreated by @amarsik1 feat. Inkognito\n" << endl;
    system("pause");
    return 0;
}
