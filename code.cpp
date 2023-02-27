#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>
using std::cout;
using std::cin;

int flag1 = 0;
int flag2 = 0;

void clearglobals(){
	flag1 = 0;
	flag2 = 0;	
}

void FillInc (int *x, int n){ 
for (int i = 0; i < n; i++) x[i] = i+1; 
}

void FillDec (int *x, int n){ 
for (int i = 0; i < n; i++) x[i] = n - i; 
}  

void FillRand (int *x, int n){
	srand(time(0));
	for(int i = 0; i < n; i++) x[i] = rand()%10000+1;
}

void PrintMas (int *x, int n){
	for (int i = 0; i < n; i++) cout<<x[i]<<" "; 
}

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
    	flag1++;
      if (array[i] > array[i + 1]){
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        flag2 = flag2 + 3;
	  }
    }
  }
}

int main(){
	int N = 100;
	int arr[N];
	int M = 200;
	int arrr[M];
	int C = 300;
	int arrrr[C];
	int P = 400;
	int arrrrr[P];
	int Y = 500;
	int arrrrrr[Y];
	FillDec(arr,N);
	bubbleSort(arr, N);
	cout<<"n"<<"           "<<"M+C - theor. "<<"                 "<<"M+C - fact.";
	cout<<"\n"<<"                                "<<"ybiv.     random.     vozr.       ";
	cout<<"\n"<<"100"<<"         "<<(((100*100)-100)/2)+3*(100-1)<<"                "<<flag2+flag1;
	clearglobals();
	FillRand(arr,N);
	bubbleSort(arr,N);
	cout<<"     "<<flag1+ flag2;
	clearglobals();
	FillInc(arr,N);
	bubbleSort(arr,N);
	cout<<"     "<<flag1+ flag2;
	clearglobals();
	FillDec(arrr, M);
	bubbleSort(arrr,M);
	cout<<"\n"<<"200"<<"         "<<(((200*200)-200)/2)+3*(200-1)<<"               "<<flag2+flag1;
	clearglobals();
	FillRand(arrr,M);
	bubbleSort(arrr,M);
	cout<<"     "<<flag1+flag2;
	clearglobals();
	FillInc(arrr,M);
	bubbleSort(arrr,M);
	cout<<"     "<<flag1+flag2;
	clearglobals();
	FillDec(arrrr, C);
	bubbleSort(arrrr,C);
	cout<<"\n"<<"300"<<"         "<<(((300*300)-300)/2)+3*(300-1)<<"               "<<flag1+flag2;
	clearglobals();
	FillRand(arrrr, C);
	bubbleSort(arrrr,C);
	cout<<"    "<<flag1+flag2;
	clearglobals();
	FillInc(arrrr, C);
	bubbleSort(arrrr,C);
	cout<<"    "<<flag1+flag2;
	clearglobals();
	FillDec(arrrrr,P);
	bubbleSort(arrrrr,P);
	cout<<"\n"<<"400"<<"         "<<(((400*400)-400)/2)+3*(400-1)<<"               "<<flag1+flag2;
	clearglobals();
	FillRand(arrrrr,P);
	bubbleSort(arrrrr,P);
	cout<<"    "<<flag1+flag2;
	clearglobals();
	FillInc(arrrrr,P);
	bubbleSort(arrrrr,P);
	cout<<"    "<<flag1+flag2;
	clearglobals();
	FillDec(arrrrrr,Y);
	bubbleSort(arrrrrr,Y);
	cout<<"\n"<<"500"<<"         "<<(((500*500)-500)/2)+3*(500-1)<<"              "<<flag1+flag2;
	clearglobals();
	FillRand(arrrrrr,Y);
	bubbleSort(arrrrrr,Y);
	cout<<"    "<<flag1+flag2;
	clearglobals();
	FillInc(arrrrrr,Y);
	bubbleSort(arrrrrr,Y);
	cout<<"    "<<flag1+flag2;
}
