#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

extern void Check_user();




struct Special_Date {
    string welcome;
    int number;
    string time;
    string ID;


};

struct User_login_in
{
    void Check_user(string User_password, string User_login)
    {
        string login = "maksimka";
        string password = "1234";

        cout << "\nвведите логин: ";
        cin >> User_login;

        cout << "\nвведите пароль: ";
        cin >> User_password;

        if (User_login == login && User_password == password)
        {
            cout << "\nУра победа!" << endl;
        }
        else
        {
            cout << "\nОшибка" << endl;

            exit(0);
            
        }
        
    };

};



struct TwoFA
{
    string TwoFAg;
    int special_code;
};





int main()
{
    setlocale(LC_ALL, "Rus");

    Special_Date sd;
    sd.welcome = "Welcome";
    sd.number = 1488;
    sd.time = "21:05  29.11.2022";
    sd.ID = "176.37.217.246";
    cout << sd.welcome << endl;
    cout << "Number: " << sd.number << endl;
    cout << "Time: " << sd.time << endl;
    cout << "ID: " << sd.ID << endl;



    User_login_in uli;
    string login;
    string password;
    uli.Check_user(login, password);

    TwoFA tfa;
    tfa.TwoFAg = "\n Двухфакторная авторизация";
    tfa.special_code;
    cout << tfa.TwoFAg << endl;

    cout << "\n\n Ароматические свечи — отличные помощники в создании настроения и домашнего уюта. Найти их можно на прилавке любого      магазина. Однако далеко не все производители могут похвастать натуральными компонентами и приятной композицией отдушек, при этом обходятся свечи довольно дорого. К счастью, есть простое и бюджетное решение — сделать ароматическую свечу в  домашних условиях.";
    cout << "\n\n Скажите спасибо";
    cin >> tfa.special_code;


    return 0;
    system("pause");
}
 