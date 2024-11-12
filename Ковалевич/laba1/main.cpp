#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float A, B, S, time1, time2,  time3, s1, s2;
    cout << "введите S";
    cin >> S;
    cout << "введите A";
    cin >> A;
    cout << "введите B";
    cin >> B;
    time1 = 1.5;
    s1 = A * time1;
    s2 = S - s1;
    time2 = s2 / B;
    time3 = time1 + time2;
    cout << " общее затраченное время " << time3 << "часов";
    return 0;
}
 
