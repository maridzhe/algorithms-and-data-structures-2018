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

	
	
 int size = 26;

	string Name[size];
	string klasR[size];
	float masaR[size];

{ 

Name[1]="Àóðóì";
klasR[1]="metal";
masaR[1]=196;

Name[2]="Ñðiáëî";
klasR[2]="metal";
masaR[2]=107;
								     
Name[3]="Ìiäü";
klasR[3]="metal";
masaR[3]=63;

Name[4]="Ðòóòü";
klasR[4]="metal";
masaR[4]=200;

Name[5]="Ñâèíåöü";
klasR[5]="metal";
masaR[5]=207;

Name[6]="Çàë³çî";
klasR[6]="metal";
masaR[6]=89;

Name[7]="Ñòàíóì";
klasR[7]="metal";
masaR[7]=12;

Name[8]="Ïëàòèíà";
klasR[8]="metal";
masaR[8]=195;

Name[9]="Ñ³ðêà";
klasR[9]="nemetal";
masaR[9]=32;

Name[10]="Âóãëåöü";
klasR[10]="nemetal";
masaR[10]=12;

Name[11]="Öèíê";
klasR[11]="metal";
masaR[11]=65;

Name[12]="Ñòèá³é";
klasR[12]="polymetal";
masaR[12]=121;

Name[13]="Àðñåí";
klasR[13]="polymetal";
masaR[13]=74;

Name[14]="Ãåë³é";
klasR[14]="nemetal";
masaR[14]=4;

Name[15]="Íåîí";
klasR[15]="nemetal";
masaR[15]=20;

Name[16]="Ôòîð";
klasR[16]="nemetal";
masaR[16]=18;

Name[17]="Õëîð";
klasR[17]="nemetal";
masaR[17]=35;

Name[18]="Ñåëåí";
klasR[18]="nemetal";
masaR[18]=78;

Name[19]="Àñòàò";
klasR[19]="nemetal";
masaR[19]=209;

Name[20]="Êðåìí³é";
klasR[20]="nemetal";
masaR[20]=28;

Name[21]="Êðèïòîí";
klasR[21]="nemetal";
masaR[21]=83;

Name[22]="Ñêàíäié";
klasR[22]="metal";
masaR[22]=45;

Name[23]="Öèðêîíié";
klasR[23]="metal";
masaR[23]=91;

Name[24]="Êîáàëüò";
klasR[24]="metal";
masaR[24]=59;

Name[25]="Ïàëàäié";
klasR[25]="metal";
masaR[25]=106;


}

string tempName;
int qw=0;
int qq=1;
int arr[size];



printf("Ââåäiòü êëàñ ðå÷îâèíè äëÿ ïîêàçó iíôîðìàöi¿ : ");
cin >> tempName;


for(int i=0;i<size;i++){
	if(tempName==klasR[i]){
	arr[qq]=masaR[i];
	qw++;
	qq++;
	}
}
	
  

   
                ShellSort(qq, arr);
                printf("\nÊðà¿íè : \n");
                
    for (int i = 0; i < qq; i++){
    	for (int j = 0 ; j < size; j++){
    if(arr[i]==masaR[j])
    cout <<"\nÍàçâà : "<< Name[j]<<"\nÌàñà ðå÷îâèíè : "<< masaR[j]<<"\nÊëàñ ðå÷îâèíè : "<<klasR[j]<<"\n\n";
   
}
}
   cout << qw;
   cout << "\nError" << endl;
system("pause");

	}
