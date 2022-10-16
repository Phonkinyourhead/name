#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    // ПІБ
    string studentFullName = "ALOHADANCE";
    // Ідентифікатор студента/залікової книжки
    string zxc = "da";
    // Вік гравця
    unsigned short int studentAge = 25;
    // Зріст гравця
    unsigned short int growth = 171;
    // Вага гравця
    unsigned short int weight = 60;
    // День народження гравця
    string BirthDay = "September 15, 1997";
    // Непереможний?
    bool invincible = true;
    // Адреса прописки гравця
    string originAddress = "Kyiv, Ukraine";
    unsigned int totalMemoryInBytes = sizeof(studentFullName) +


        sizeof(zxc) +
        sizeof(studentAge) +
        sizeof(growth) +
        sizeof(weight) +
        sizeof(BirthDay) +
        sizeof(invincible) +
        sizeof(originAddress);

    cout << "Iм'я гравця:\t\t" << studentFullName << endl;
    cout << "zxc?:\t\t\t" << zxc << endl;
    cout << "Вiк гравця:\t\t" << studentAge << endl;
    cout << "Зрiст гравця(см):\t" << growth << endl;
    cout << "Вага гравця(кг):\t" << weight << endl;
    cout << "День народження гравця:\t" << BirthDay << endl;
    cout << "Непереможний:\t\t" << ((invincible) ? "Так" : "Нi") << endl;
    cout << "Адреса:\t\t\t" << originAddress << endl;

    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

        totalMemoryInBytes << endl;
}   