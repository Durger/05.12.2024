#include <iostream>
using namespace std;

//17-3.Объединения  union Employee
//union Employee {   
//	int id;
//	double salary;
//};

//17-4.Битовые поля
struct statusField
{
	unsigned int JS;
	unsigned int PHP;
	unsigned int Python;
} 
state;

//17-4.Битовые поля
	//пример, когда нам нужно использовать один байт :
struct fieldbite									//8бит=1байт
{
	unsigned short field1 : 2;
	unsigned short field2 : 2;
	unsigned short field3 : 4;
}
field;

//17-4
struct Date {
	unsigned short nWeekDay : 3; // 0..7 (3 bits)
	unsigned short nMonthDay : 6; // 0..31 (6 bits)
	unsigned short nMonth : 5; // 0..12 (5 bits)
	unsigned short nYear : 8; // 0..100 (8 bits)
};


int main()
{
	system("chcp 1251");
	
	//Урок 17-2. Битовые операции
	//unsigned int x = 4;  //0100
	//x = x << 1; // x должен стать равным 8  // сдвиг на 1
	//cout << x; //1000 x должен стать равным 8
	//return 0;


	//17-2
	//int x, y, z, k;
	//x = 5;                        //0101
	//y = 6;                        //0110
	//k = x | y; // Операция 5 | 6  //0111
	//cout << k << " ";             //7
	//x = 1;                                     //0100
	//y = 4;
	//z = 6;                                     //0110
	//k = x | y | z; // Операция 1 | 4 | 6
	//cout << k << " ";
	//x = 5;                           //0101
	//y = 6;                           //0110
	//k = x & y; // Операция 5 & 6     //0100
	//cout << k << " ";	
	//x = 1;                                    //0100
	//y = 3;                                    //0011
	//z = 7;                                    //0111
	//k = x & y & z; // Операция 1 & 3 & 7      //0001
	//cout << k << " ";
	//x = 6;                           //0110
	//y = 3;                           //0011
	//k = x ^ y; // Операция 6 ^ 3     //0101
	//return 0;


	//17-2. пример на применение различных битовых операций
	//int y = 02,    //00000010
	//	x = 03,    //00000011
	//	z = 01,    //00000001 
	//	k;
	//k = x | y & z; // Операция 1  //сначала y & z  -потом с x   //3 и 0
	//cout << k << " ";             //=3
	//
	//k = x | y & ~z; // Операция 2  //сначала переворот ~z, потом &, потом |
	//cout << k << " ";              //=3
	//
	//k = x ^ y & ~z; // Операция 3  //сначала переворот ~z (-2), потом  &, потом ^
	//cout << k << " ";              //=1
	//
	//k = x & y && z; // Операция 4  //сначала & , потом  &&
	//cout << k << " ";
	//
	//x = 1;
	//y = -1;
	//k = !x | x; // Операции 5      //сначала ! (0) , потом | (1)
	//cout << k << " ";             //=1
	////11111111=-1
	////00000001=1
	////11111111=-1
	//
	//k = -x | x; // Операции 6     //сначала -x (-1) , потом | (1)
	//cout << k << " ";             //=1
	//
	//k = x ^ x; // Операции 7      
	//cout << k << " ";             //=0
	//
	//x <<= 3; // Операции 8        //00000001<<3=00001000=8
	//cout << x << " ";
	//
	//y <<= 3; // Операции 9        //11111111<<3=11111000=-8
	//cout << y << " ";
	//
	//y >>= 3; // Операции 10       //11111000<<3=11111111=-1
	//cout << y << " ";
	////10=00001010
	//   //11110101  - инверсия  +1
	//   //11110110 =-10


	//Урок 17-3.Объединения
	//union                     //Выделяет объем памяти кратный максимальному в типу хранения данных int Или long
	//{
	//	short int component1;
	//	int component2;
	//	long int component3;
	//} 
	//myUnion; // объект объединения
	//
	//myUnion.component1 = 22;
	//cout << myUnion.component1 << endl;
	//
	//myUnion.component2 = 222222222;
	//cout << myUnion.component3 << endl;
	//
	//cout << myUnion.component1 << endl; // снова обращаемся к component1


	//17-3// union Employee
	//Employee myEmployee;
	//myEmployee.id = 15;            //обращение через точку
	//cout << "The first value (id) at ";
	//cout << "the allocated memory: ";
	//cout << myEmployee.id << "\n";
	//myEmployee.salary = 100.35;
	//cout << "The next value (salary) stored ";
	//cout << "after removing the previous value: ";
	//cout << myEmployee.salary << "\n";


	//17-4/ .Битовые поля
struct DateTime {
	unsigned short DayNum : 5;
	unsigned short MonthNum : 4;
	unsigned short YearNum : 7;
	unsigned short HourNum : 5;
	unsigned short MinuteNum : 6;
	unsigned short SecondNum : 6;
};
	DateTime d;
	int i
	cout << "Input the day number (from 1 to 31):"
	<< '\t';
	cin >> i;
	d.DayNum = i;
	cout << "Input the month number (from 1 to 12):"
	<< '\t';
	cin >> i;
	d.MonthNum = i;
	cout << "Input Year (from 00 to 99) :" << '\t';
	cin >> i;
	d.YearNum = i;
	cout << endl << "Input Hours (from 0 to 24):"
	<< '\t';
	cin >> i;
	d.HourNum = i;
	cout << "Input Minutes (from 0 tp60):" << '\t';
	cin >> i;
	d.MinuteNum = i;
	cout << "Input Seconds (0-60):" << '\t';
	


	



}