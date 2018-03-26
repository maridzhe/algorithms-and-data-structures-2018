#include <iostream>
	#include <conio.h>
#include <stdlib.h>
	using namespace std;
	int mass[2][8] = {{12,13,45,14,15,16,17,5},
	                     {12,54,3,78,23,65,12,8}};
	
	void BubbleSort(int a,int b)
	{
	      int temp;
	      int i,j;
	      for(int k = 0;k<a;k++){
	      for(i=0;i<b;i++){
	         for(j=0;j<(b-1);j++){
	         if(mass[k][j]>mass[k][j+1]){
	           temp = mass[k][j];
	           mass[k][j] = mass[k][j+1];
	           mass[k][j+1] = temp;
	          };
	         };
	        };
	      };
	}
	
	int main(){
	 system("Color A");
	    BubbleSort(2,8);
	    for(int j = 0;j<2;j++){
	        cout<<"matrix "<<j<<endl;
	        for(int i = 0;i<8;i++){
	            cout<<mass[j][i]<<endl;
	        };
	        cout<<"--------------------------------------\n";
	    };
	    getch();
	    return 0;
	};

