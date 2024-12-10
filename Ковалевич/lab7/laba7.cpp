#include <iostream>
#include <string>
#include<fstream>

using namespace std;

struct Student
{
    int age;
    string name;
    string last_name;
};
bool start(const string& str, char letter) {
    if (!str.empty()) {
        return toupper(str[0]) == toupper(letter);
    }
    return false;
}
int main()
{
setlocale(LC_ALL, "Russian");
   
     Student students[3];
    

  for (int i = 0; i < 3; ++i) {
        cout << "Студент " << (i + 1) << "";
        cout << "Имя: ";
        cin >> students[i].name;
        cout << "Фамилия: ";
        cin >> students[i].last_name;
        cout << "Возраст: ";
        cin >> students[i].age;
        }


    
    ofstream outFile("students.txt");

        outFile << "Студенты, чьи фамилии начинаются на 'I' или 'F':\n";

   
    for (int i = 0; i < 3; ++i) {
        if (start(students[i].last_name, 'I') || start(students[i].last_name, 'F')) {
           
            outFile << "Имя: " << students[i].name
                    << ", Фамилия: " << students[i].last_name
                    << ", Возраст: " << students[i].age;
                    
        }
    }
 

    outFile.close();
return 0;

}