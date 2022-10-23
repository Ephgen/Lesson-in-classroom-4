// Lesson in classroom 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <stdlib.h> // Библиотека для рандома
#include <time.h> // Библиотека работы со временем

using namespace std;


int main()
{
    srand(time(NULL));

    int arr[20];
    

    for (int j = 0; j < 20; j++)
    {
        arr[j] = rand() % (30 - 10) + 10;  //Генерация массива
        cout << arr[j] << endl;
    }
    for (int i = 0; i < 20; i++)
        for (int j = i + 1; j < 20; j++)
            if (arr[i] > arr[j])
                {
                    int buf = arr[i];
                    arr [i] = arr[j];
                    arr[j] = buf;
                                      
                }
    cout << endl;
    for (int j = 0; j < 20; j++)
        cout << arr[j] << endl;

}
    /*int arr[10][2];

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            arr[i][j] = rand() % (30 - 10) + 10;
            cout << arr[i][j] << "\t";
        }
    }*/
       
//двумерные массивы
//int arr[10][2];  //сначала строки потом столбцы
//arr[0][0] = 


    /*setlocale(0, "Russian");
    int a;
    srand(time(NULL));
    a = rand() % 5 + 23;*/
   
    
    /*int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % (50-20)+20;
        cout << arr[i] << endl;
    }*/

    /*int arr[7]{ -2,3,-10,-3,99,-5,0 };
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 3 != 0)
            cout << arr[i];
    }*/


    /*int arr[7]{ -2,3,-10,-3,99,-5,0 };
    int min = arr [0];
    int max = arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << min << endl;
    cout << max;*/

    /*int arr[7]{ -2,3,-10,-3,99,-5,0 };
    int sum = 0;
    for (int i = 0; i < 7; i++)
        if (arr[i] < 0)
            sum += arr[i];
    cout << sum;*/



    //int arr[4]{ 1,2,3,4 }; // Три примера заполнения массивов
    //arr[0] = 1;
    //arr[1] = 2;
    //arr[2] = 3;
    //arr[3] = 4;

    //for (int i = 0; i < 4; i++)
    //    arr[i] = i + 1;
    //cout << arr[2];




    /*int x = 1; int y = 1;
    while (x <= 4)
    {
        y = 1;
        while (y <= 4)
        {
            if (x + y == 5)
                cout << "+";
            else
                cout << "=";
            y++;
        }
        x++;
        cout << endl;
    }*/


    /*int x = 1; int y = 1;
    while (x <= 4)
    {
        y = 1;
        while (y <= 4)
        {
            if (x==y)
                cout << "+";
            else
                cout << "=";
            y++;
        }
        x++;
        cout << endl;
    }*/

    /*for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i == j)
                cout << " + ";
            else
                cout << " = ";
        }
        cout << endl;
    }*/





   //Вывести на экран прямоугольник из символов 20 *20
    /*int str = 1;
    int star_count;
    int length = 20;
    while (str <= length)
    {
        star_count = 1;
        while (star_count <= length)
        {
            cout << " * ";
            star_count++;
        }
        cout << endl;
        str++;
    }*/


    /*for (int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <=10; j++)
           
            cout << i * j << "\t";
        cout << endl;
    }*/

    /*for (int a = 0; a < 10; a++)
    { 
        for (int b = 0; b < 10; b++)
        {
            if (a + b >= 9 && a >= b)
                cout << "|+++|";
            else
                cout << "     ";
        }
        cout << endl;
    }

    for (int i = 0; i < 10; i++)
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
    


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
