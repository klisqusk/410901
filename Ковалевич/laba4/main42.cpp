#include <iostream>
#include <ctime>
#include <clocale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL)); 
    int p;
    p=1;
   
       int arr [5] [5];
        for (int i = 0; i < 5; i++) {
          for (int j = 0; j <5 ; j++) { 
           arr[i][j] = rand() % 21-10; 
            cout << arr[i][j] << "  "; 
        }
        cout << endl;
        }
        if(arr[0][0]<0){
          for (int j = 0; j <5 ; j++) { 
            p=p*arr[0][j];
        }
        }
        if(arr[1][0]<0){
          for (int j = 0; j <5 ; j++) { 
            p=p*arr[1][j];
        }
        }
        if(arr[2][0]<0){
          for (int j = 0; j <5 ; j++) { 
            p=p*arr[2][j];
        }
        }
        if(arr[3][0]<0){
          for (int j = 0; j <5 ; j++) { 
            p=p*arr[3][j];
        }
        }
        if(arr[4][0]<0){
          for (int j = 0; j <5 ; j++) { 
            p=p*arr[4][j];
        }
        }
   cout<< p;
    
    
return 0;
}
