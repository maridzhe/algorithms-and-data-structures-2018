#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;
 
int main()
{
srand(time(NULL));
system("color A");
setlocale(LC_ALL, "rus");
 
cout << "Selection\nВведите размер массива: ";
    int size; 
    cin >> size;
    if (size <= 0) {
        cerr << "\nInvalid size" << endl;
        return 1;
    }
    cout << "\nМассив заполняется, подождите...\n" <<endl;
int a[size];
 


for (int i = 0; i<size; ++i)
{
a[i] = rand() % size;
}
cout<<endl;
 
clock_t t1 = clock();
int Min = 999999, index = -1, count = 0;
for (int i = 0; i <size - 1; ++i)
{
for (int j = i; j<size; ++j)
{
if (Min> a[j]) {
Min = a[j];
index = j;
}
}
swap(a[i], a[index]);
count++;
Min = 999999;
}
 clock_t t2 = clock();
cout<< "\n" << "Aftersort: " <<endl;
for (int i = 0; i<size; ++i)
cout<< a[i] << "\t";
cout<<endl;
cout << "\n\nTime: " << (double) (t2-t1) / (double)CLOCKS_PER_SEC <<" sec." << '\n';
   std::cin.get();
   cout << "\ncreated by @amarsik1 feat. Inkognito\n" << endl;
 
system("pause");
return 0;
}
