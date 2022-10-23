// Lesson in classroom 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    setlocale(0, "Russian");
     for (int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <=10; j++)
           
            cout << i * j << "\t";
        cout << endl;
       
    }


    /*for (int i = 0; i < 10; i++)
    {


        for (int j = 0; j < 10; j++)
        {
            cout << "|###|";
        }
        cout << endl;
    }*/




    /*int a = 0;
    int b = 10;
    while (a!=b)
    {
        cout << a << " " << endl;
        a++;
    }*/
    
}

