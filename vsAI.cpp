#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

//Игра против компьютера
void vsAI()
{
    cout << "Назовите город:" << endl;
    string city;
    cin >> city;

    //Проверка правильности

    //Объявление char переменных
    char lastLetter = city[0];
    //Объявления флага нахождения города
    int flag = 0;
    //Объявление номера городов в строке
    int fileCityNumber = 0;
    //Объявление счетчиков
    int i = 0, j = 0;
    //Объявление переменной для считывания строк
    string str, str1;
    //Объявление переменной для названия города для вывода
    string cityOut;
    //Объявление переменной file и имени файла
    ifstream file("Cities.txt");
    ofstream file1("NewCities.txt")
    //Номер строки с городами
    int lineNumber = 0;
    //Проверка на наличие города, который начинается на такую букву, и кол-во таких городов.
    while ((!file.getline(str).eof()) && (flag = 0))
    {
        if (lastLetter = str[0])
        {
            //Город найден
            flag = 1;
            //Подсчет кол-ва таких городов
            for (i = 0; i < str.length(); i++)
            {
                if (str[i] = ";")
                {
                    fileCityNumber++;
                }
            }
        }
        else
        {
            lineNumber++;
        }
    }
    //Если город существует
    if (flag = 1)
    {
        //Рандомизация по времени
        srand(time(NULL));
        fileCityNumber = rand() % fileCityNumber;
        i = 0;
        //Нахождение первого элемента города для записи
        while (i < fileCityNumber)
        {
            if (str[j] = ";")
            {
                i++;
            }
            j++;
        }
        i = 0;
        //Запись названия города в cityOut
        while !(str[i] = ";")
        {
            cityOut[i] = str[i];
            i++:
        }
        cout << cityOut << endl;

        while (!file.getline(str1).eof())
        {
            /*Запись в новый файл*/
            file1 <<
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "rus");
    return 0;
}
