#include<iostream>
#include<string>
#include <conio.h>

using namespace std;

extern void menu();
extern void show_menu();
extern wstring** enter_login();
extern char** enter_password();
extern wstring** areyou_nigger();

int startupAuthoriz(int argsC,
    char* argsV[])

{
    int passwordLength = 0;
    for (int argumentIndex = 1;
        argumentIndex < argsC;
        argumentIndex++)
    {
        const char* argK = argsV[argumentIndex];
        const char* argV = argsV[argumentIndex + 1];
        if (strcmp(argK, "-login") == 0)
        {
            cout << "Ви авторизувались як\t" << argV << endl;
        }
        else
        {
            if (strcmp(argK, "-password") == 0)
            {
                passwordLength = strlen(argV);
                break;
            }
        }
    }



    return passwordLength;
}
int main(int argsC,
    char* argsV[],
    char* environmentParameters[]
)
{

    setlocale(LC_ALL, "");
   

    if (argsC > 1)
    {
        return startupAuthoriz(argsC, argsV);
    }
    else
    {
        menu();
    }

    cin.get();
    return 0; 
}

#ifndef INPUT_MAIN_SAMPLE_H
#define INPUT_MAIN_SAMPLE_H

void show_menu()
{

    wcout << L"Оберiть пункт меню:" << endl;
    wcout << L"1.) Ввести iм'я користувача" << endl;
    wcout << L"2.) Ввести пароль" << endl;
    wcout << L"3.) вы негр и хотите воды?" << endl;
    wcout << L"4.) Завершити роботу" << endl;
  
}
wstring** enter_login()
{
    wstring* login = new wstring();
    wcout << L"Введiть iм'я користувача (login):" << endl;
    wcin.ignore();
    getline(wcin, *login);

    return &login;
}
char** enter_password()
{
    const short int MAX_PASSWORD_LENGTH = 16;
    char* password = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Введiть пароль:" << endl;
    cin >> password;
    return &password;
}
wstring** areyou_nigger() {
    wstring* nigger = new wstring();
    wcout << L"точно?" << endl;
    wcin.ignore();
    getline(wcin, *nigger);

    return &nigger;
}
void menu()
{
    short int selectedMenuItem = 1;
    wstring login = L"";
    wstring nigger = L"";
    char* password = nullptr;
    show_menu();
    cin >> selectedMenuItem;
    switch (selectedMenuItem)
    {
    case 1:
        login = **enter_login();
        break;
    case 2:
        password = *enter_password();
        break;
    case 3:
        nigger = **areyou_nigger();
        break;
    case 4:
        exit(0);
        
    }

    if (!login.empty())
    {
        wcout << L"Ваш логiн:\t" << login << endl;
    }
    if (!nigger.empty())
    {
        wcout << L"ты не получишь воды, иди работай тёмный мальчик понял?:\t" << nigger << endl;
    }
  
    
        if (password != nullptr)
        {


            wcout << L"Пароль успiшно змiнено на:\t"
                << endl << password;
            delete[] password;
        }
    
    system("pause");
}
#endif
