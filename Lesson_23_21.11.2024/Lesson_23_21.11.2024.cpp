#include <iostream>
#include <typeinfo>
using namespace std;

//15-3  Массивы указателей на функции
//void act1(char* name) {
//    cout << "\n Creater file......... \n";
//}
//void act2(char* name) {
//    cout << "\n Creater file......... \n";
//}
//void act3(char* name) {
//    cout << "\n Creater file......... \n";
//}
//void act4(char* name) {
//    cout << "\n Creater file......... \n";
//}
//void act5(char* name) {
//    cout << "\n Creater file......... \n";
//}


//15-3 Ключевые слова auto и decltype.Автоматическое выведение типа
//auto minF() {       //Функция возврата минимального значенния   auto-автоматическое определение типа данных
//    int a = 20;
//    int b = 10;
//    if (a < b)
//    {
//        return a + 10.5;
//    }
//    else
//    {
//        return b+10.5;
//    }
//}

//15-3  Хвостовой возвращаемый тип
//auto myFunc1(float a, int b, int c) -> decltype((a + b) / c)
//{
//    return (a + b) / c;
//}


void main()
{
    system("chcp 1251");

    //15-3  Массивы указателей на функции
    //Создание и инициализация массивов указателей
    //void(*MenuAct[5])(char*) = {
    //    act1, act2, act3, act4, act5
    //};
    //int number;                //номер выбранного меню
    //char FileName[30];        //строка для имени файла
    //cout << "\n 1 - Ctreate";
    //cout << "\n 2 - Delete";
    //cout << "\n 3 - Reade";
    //cout << "\n 4 - Mode";
    //cout << "\n 5 - Close";
    //while (1){
    //while (1) {
    //    cout << "\n \n Select actions: ";
    //    cin >> number;
    //    if ((number >= 1) && (number <= 5)) {
    //        break;
    //    }
    //    else {
    //        cout << "\n Wrong number";
    //    }
    //}
    //if (number != 5) {
    //    cout << "\n Enter file name: ";
    //    cin >> FileName;                 //Читаем имя файла
    //    (*MenuAct[number - 1])(FileName);//Вызов функции указателя на нее
    //}
    //else {
    //    break;
    //}
    //}


    //15-3 Ключевые слова auto и decltype. 
   /* auto myMin = minF();
    cout << myMin<<endl;
    cout <<sizeof(myMin)<<endl;*/


    //15-3 Автоматическое выведение типа
    /*int y = 10;
    int& r = y;
    int x = 5;
    decltype(r) var = x;
    var = 12;
    cout << x;*/

    //15-3  Хвостовой возвращаемый тип
    /*cout << "myFunc1-" << myFunc1(5, 2, 3) << "\n";
    cout << sizeof(myFunc1(5, 2, 3)) << endl;
    cout << typeid(myFunc1(5, 2, 3)).name() << endl;
    cout << "myFunc1-" << myFunc1(1, 1, 1) << "\n";
    cout << myFunc1(5, 2, 3) << "\n";
    cout << myFunc1(1, 1, 1) << "\n";;
    cout << typeid(1, 1, 1).name() << "\n";;*/
 
    //Практика 17-1
    // Задание 1. Написать программу, которая удаляет из двухмерного массива, заполненного случайными числами
    // строки, содержащие нулевые элементы.


}
