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

Name[1]="Аурум";
klasR[1]="metal";
masaR[1]=196;

Name[2]="Срiбло";
klasR[2]="metal";
masaR[2]=107;
								     
Name[3]="Мiдь";
klasR[3]="metal";
masaR[3]=63;

Name[4]="Ртуть";
klasR[4]="metal";
masaR[4]=200;

Name[5]="Свинець";
klasR[5]="metal";
masaR[5]=207;

Name[6]="Залізо";
klasR[6]="metal";
masaR[6]=89;

Name[7]="Станум";
klasR[7]="metal";
masaR[7]=12;

Name[8]="Платина";
klasR[8]="metal";
masaR[8]=195;

Name[9]="Сірка";
klasR[9]="nemetal";
masaR[9]=32;

Name[10]="Вуглець";
klasR[10]="nemetal";
masaR[10]=12;

Name[11]="Цинк";
klasR[11]="metal";
masaR[11]=65;

Name[12]="Стибій";
klasR[12]="polymetal";
masaR[12]=121;

Name[13]="Арсен";
klasR[13]="polymetal";
masaR[13]=74;

Name[14]="Гелій";
klasR[14]="nemetal";
masaR[14]=4;

Name[15]="Неон";
klasR[15]="nemetal";
masaR[15]=20;

Name[16]="Фтор";
klasR[16]="nemetal";
masaR[16]=18;

Name[17]="Хлор";
klasR[17]="nemetal";
masaR[17]=35;

Name[18]="Селен";
klasR[18]="nemetal";
masaR[18]=78;

Name[19]="Астат";
klasR[19]="nemetal";
masaR[19]=209;

Name[20]="Кремній";
klasR[20]="nemetal";
masaR[20]=28;

Name[21]="Криптон";
klasR[21]="nemetal";
masaR[21]=83;

Name[22]="Скандiй";
klasR[22]="metal";
masaR[22]=45;

Name[23]="Цирконiй";
klasR[23]="metal";
masaR[23]=91;

Name[24]="Кобальт";
klasR[24]="metal";
masaR[24]=59;

Name[25]="Паладiй";
klasR[25]="metal";
masaR[25]=106;


}

string tempName;
int qw=0;
int qq=1;
int arr[size];



printf("Введiть клас речовини для показу iнформацiї : ");
cin >> tempName;


for(int i=0;i<size;i++){
	if(tempName==klasR[i]){
	arr[qq]=masaR[i];
	qw++;
	qq++;
	}
}
	
  

   
                ShellSort(qq, arr);
                printf("\nКраїни : \n");
                
    for (int i = 0; i < qq; i++){
    	for (int j = 0 ; j < size; j++){
    if(arr[i]==masaR[j])
    cout <<"\nНазва : "<< Name[j]<<"\nМаса речовини : "<< masaR[j]<<"\nКлас речовини : "<<klasR[j]<<"\n\n";
   
}
}
   cout << qw;
   cout << "\ncreated by amarsik1 feat. Inkognito\n" << endl;
system("pause");

	}
