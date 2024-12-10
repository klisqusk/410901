#include <iostream>
#include <clocale>
#include <string>
using namespace std;

bool divisibility(unsigned long long P)
{
    int sum = 0;
    while (P > 0)
    {
        sum += P % 10;
        P /= 10;
    }
    return (sum % 9 == 0);
}

void function ( int n, int arr[100]) {
        int s=0;
        for (int l = 0; l < n; l ++) {
            if (arr[l]%2==0) {
                s++;
            }
        }
  
        cout << s<< endl;
       
}

void function (const string& input){
int count=0;
bool word = true; 

    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            word = true;
        } else if (word) {
            if (input[i] =='a' || input[i] =='A') {
                count++;
            }
            word = false;
        }
    }

cout << count;

}
int main()
{
    setlocale(LC_ALL, "Russian");

    unsigned long long P;
    cout << "Введите число P: ";
    cin >> P;

    if (divisibility(P))
    {
        cout << "Число " << P << " кратно 9" << endl;
    }
    else
    {
        cout << "Число " << P << " не кратно 9" << endl;
    }
     int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int arr[100];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    function (n, arr);

    cin.ignore(); 
    string input;
    cout << "Введите строку: ";
    getline(cin, input);

    function (input);


    return 0;
}