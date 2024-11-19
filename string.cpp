#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int Count(const string& s) {
    size_t pos = 0;
    int count = 0;

    // Шукаємо всі входження "OGO" або "AGA"
    while ((pos = s.find("OGO", pos)) != string::npos || (pos = s.find("AGA", pos)) != string::npos) {
        count++;
        pos++; // Переміщаємо позицію далі для пошуку
    }
    return count;
}

string Change(string& s) {
    size_t pos = 0;

    // Шукаємо всі входження "OGO" або "AGA" і замінюємо на "***"
    while ((pos = s.find("OGO", pos)) != string::npos || (pos = s.find("AGA", pos)) != string::npos) {
        s.replace(pos, 3, "***"); // Замінюємо 3 символи на "***"
        pos += 3; // Зсуваємо позицію для наступного пошуку
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str); // Зчитуємо рядок, включаючи пробіли
    // Підрахунок трійок "OGO" або "AGA"
    cout << "String contained " << Count(str) << " groups of \"OGO\" or \"AGA\"." << endl;
    // Заміна трійок на "***"
    string modifiedStr = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}
