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

Name[1]="�����";
klasR[1]="metal";
masaR[1]=196;

Name[2]="��i���";
klasR[2]="metal";
masaR[2]=107;
								     
Name[3]="�i��";
klasR[3]="metal";
masaR[3]=63;

Name[4]="�����";
klasR[4]="metal";
masaR[4]=200;

Name[5]="�������";
klasR[5]="metal";
masaR[5]=207;

Name[6]="�����";
klasR[6]="metal";
masaR[6]=89;

Name[7]="������";
klasR[7]="metal";
masaR[7]=12;

Name[8]="�������";
klasR[8]="metal";
masaR[8]=195;

Name[9]="ѳ���";
klasR[9]="nemetal";
masaR[9]=32;

Name[10]="�������";
klasR[10]="nemetal";
masaR[10]=12;

Name[11]="����";
klasR[11]="metal";
masaR[11]=65;

Name[12]="�����";
klasR[12]="polymetal";
masaR[12]=121;

Name[13]="�����";
klasR[13]="polymetal";
masaR[13]=74;

Name[14]="����";
klasR[14]="nemetal";
masaR[14]=4;

Name[15]="����";
klasR[15]="nemetal";
masaR[15]=20;

Name[16]="����";
klasR[16]="nemetal";
masaR[16]=18;

Name[17]="����";
klasR[17]="nemetal";
masaR[17]=35;

Name[18]="�����";
klasR[18]="nemetal";
masaR[18]=78;

Name[19]="�����";
klasR[19]="nemetal";
masaR[19]=209;

Name[20]="������";
klasR[20]="nemetal";
masaR[20]=28;

Name[21]="�������";
klasR[21]="nemetal";
masaR[21]=83;

Name[22]="�����i�";
klasR[22]="metal";
masaR[22]=45;

Name[23]="������i�";
klasR[23]="metal";
masaR[23]=91;

Name[24]="�������";
klasR[24]="metal";
masaR[24]=59;

Name[25]="�����i�";
klasR[25]="metal";
masaR[25]=106;


}

string tempName;
int qw=0;
int qq=1;
int arr[size];



printf("����i�� ���� �������� ��� ������ i�������i� : ");
cin >> tempName;


for(int i=0;i<size;i++){
	if(tempName==klasR[i]){
	arr[qq]=masaR[i];
	qw++;
	qq++;
	}
}
	
  

   
                ShellSort(qq, arr);
                printf("\n����� : \n");
                
    for (int i = 0; i < qq; i++){
    	for (int j = 0 ; j < size; j++){
    if(arr[i]==masaR[j])
    cout <<"\n����� : "<< Name[j]<<"\n���� �������� : "<< masaR[j]<<"\n���� �������� : "<<klasR[j]<<"\n\n";
   
}
}
   cout << qw;
   cout << "\ncreated by amarsik1 feat. Inkognito\n" << endl;
system("pause");

	}
