#include <iostream>
using namespace std;

//Урок 16 - 1. Структура.Определение структур
//struct Date {                                     //Cоздание оьекта структуры
//int day, month, weekday, year;
//char nameManth[15];
//
//};


//16-1 учетная карточка служащего
//struct Date
//{
//    int day; // День.
//    char month[10]; // Месяц.
//    int year; // Год.
//};
//struct Person
//{
//    char name[15]; // Имя, фамилия, отчество.
//    char address[15]; // Домашний адрес.
//    int zipcode[2]; // Почтовый индекс.
//    int s_number[2]; // Код соц.обеспечения.
//    int salary[4]; // Зарплата.
//    Date birthdate; // Дата рождения.
//    Date hiredate; // Дата поступления на работу.
//    void Print(){
//        cout << "\nname: " << name << "\naddress: " << address << "\nzipcode[0]: " << zipcode[0] << "\nzipcode[1]: "
//            << zipcode[1] << "\ns_number[0]: "
//            << s_number[0] << "\ns_number[1]: " << s_number[1] << "\nsalary[0]: " << salary[0] << "\nsalary[1]: " << salary[1] 
//            << "\nbirthdate.day : " << birthdate.day << "\nbirthdate.month: "
//            << birthdate.month << "\nbirthdate.year: " << birthdate.year << "\nhiredate.day: "
//            << hiredate.day << "\nhiredate.month: " << hiredate.month << "\nhiredate.year: " << hiredate.year << endl;
//    }
//};

//Практика 18. Задание 1. Создать структуру, описывающую прямоугольник. Написать функции для работы с этой структурой: 
// перемещение прямоугольника, изменение размера прямоугольника, печать прямоугольника.
//struct Rectangle {
//    int x, y, width, height;
//
//void Resizing (int nwidth, int nheight){
//    width = nwidth;
//    height = nheight;
//}
//
//void Moving(int nx, int ny) {
//    x += nx;
//    y += ny;
//}
//    void PrintRectangle() {
//        cout <<"\nx, y =   " <<x<< "."<< y;
//        cout <<"\nwidth: " << width;
//        cout << "\nheight: " << height;
//    }
//};

//Практика 18. Задание 2. Создайте структуру, описывающую точку в двумерной системе координат(x, y).С помощью этой
//структуры задайте две точки.Напишите функцию, которая вычисляет расстояние между этими двумя точками ?

struct Points {
    int x, y;
       
    void Counter(int nx, int ny) {
        for(i=0;i<y;i++)
        
    }
    void PrintRPoints() {
        cout << "\nx, y =   " << x << "." << y;
       
    }
};



int main()
{
    system("chcp 1251");

    //Урок 16 - 1. Структура.Определение структур- Реализация
    /*Date myBirthday = { 6,5,7,1978,"May"};
    cout<<"\nMy birthday\n";
    cout << "\n  day:  \n"<< myBirthday.day<<"month: "<<"Year: "<< myBirthday.year<< "Weekday: " << myBirthday.weekday<<
    "\n Month: " << myBirthday.month ;
    cout << "\n When you birthday: \n";
    cout << "\n Enter day: \n";
    cin >> myBirthday.day;
    cout << "\n Enter month: \n";
    cin >> myBirthday.month;
    cout << "\n Enter weekday: \n";
    cin >> myBirthday.weekday;
    cout << "\n Enter year: \n";
    cin >> myBirthday.year;
    cout << "\n  day:  \n" << myBirthday.day << "month: " << "Year: " << myBirthday.year << "Weekday: " << myBirthday.weekday <<
        "\n Month: " << myBirthday.month;*/

    //учетная карточка служащего
   /* Date datePerson1 = { 6,"May",1953};
    Date datePerson2 = { 6,"May",1953};
    Date datePerson3 = { 6,"May",1953};
    Date datePerson1Work = { 16,"May",1977};
    Date datePerson2Work = { 16,"May",1977};
    Date datePerson3Work = { 16,"May",1977};
    Person person1 = { "Ivan","Kuibysheva 12",{12,23},{23,45},{1200,13000,12000,23000},datePerson1, datePerson1Work};
    Person person2 = { "Ivan","Kuibysheva 12",{12,23},{23,45},{1200,13000,12000,23000},datePerson2, datePerson2Work };
    Person person3 = { "Ivan","Kuibysheva 12",{12,23},{23,45},{1200,13000,12000,23000},datePerson3, datePerson3Work };
    Person persons[3] = { person1,person2,person3 };

    for (int i = 0; i < 3; i++) {
        persons[i].Print();
    }*/


    //Практика 18. Задание 1. Создать структуру, описывающую прямоугольник. Написать функции для работы с этой структурой: 
    // перемещение прямоугольника, изменение размера прямоугольника, печать прямоугольника.
    //Реализация
    Rectangle rectangle1 = {5,10,10,4};
    rectangle1.PrintRectangle();
    rectangle1.Resizing(15,45);
    rectangle1.PrintRectangle();
    rectangle1.Moving(15,15);
    rectangle1.PrintRectangle();

    //Практика 18. Задание 2. Создайте структуру, описывающую точку в двумерной системе координат(x, y).С помощью этой
    //структуры задайте две точки.Напишите функцию, которая вычисляет расстояние между этими двумя точками ?
    //Реализация






}
