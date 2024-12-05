#include <iostream>
using namespace std;

//1.
const int Maxlen = 235;

//Практика 15-1 // Дана строка символов. Заменить в ней все пробелы на табуляции.
void Strset(char* s) {                     //Метод замены пробелов на табуляции
	int lenght = strlen(s);
	for (int i = 0; i < lenght; i++) {
		if (s[i] == ' ') {
			s[i] = '\t';
		}
	}
}


//Практика 15-2 // Метод определение количества букв, цифр и остальных символов
void StrDigOthCount(char* str) {
	int leter=0, number=0, other=0;
	for (int i = 0; i < strlen(str); i++) {
		if (isalpha(str[i])) {
			leter++;
		}
		if (isdigit(str[i])) {
			number++;
		}
		else {
			other++;
		}
	}
	cout << "leteral: " << leter <<endl;
	cout << "number: " << number <<endl;
	cout << "other: " << other <<endl;
}


//Практика 15-3 // Метод определение количества введенных знаков
void StringCount(char* str2) {
	int string2 = 0; number2 = 0, other2 = 0;
	for (int i = 0; i < strlen(str2); i++) {
		if (isalpha(str2[i])) {
			leter2++;
		}
		if (isdigit(str2[i])) {
			number2--;
		}
		else {
			other2--;
		}
	}
	cout << "leteral: " << leter << endl;
	cout << "number: " << number << endl;
	cout << "other: " << other << endl;
}





void main()
{
	system("chcp 1251");

	//1. Подсчет длинны строки
	//char str[Maxlen];
	//cout << "Enter the string: \n";
	//gets_s(str);                                            //Принимает строку
	//cout << '\n';
	//cout << "String: \n"<< str << '\n';
	//cout << "Lenght: " << strlen(str) <<endl;              //Подсчет количества значений
	
	//Заполнение массива char случайными числами
	/*char* c1 = new char[10];
	char* c2 = new char[10];
	for(int i = 0; i < 10; i++) {
		c1[i] = i + 48;
		cout << c1[i] << " ";
	}
	strcpy(c2, c1);
	cout << "\n";
	for (int i = 0; i < 10; i++) {
		c2[i] = i + 48;
		cout << c2[i] << " ";
	}*/

	//2. Конкатенация строк - это сложение
	//char original[128] = " Test";
	//char original2[128] = " Pavlova";
	//strcat(original, " one , two, free !");              // strcat - Сложение строк
	//cout << original << " \n ";
	//strcat(original2, original);
	//cout << original2 << " \n ";

	//2-1
	//char* fam = new char[128];					// Выделение динамической памяти для указателя
	//char* im = new char[128];
	//char* otch = new char[128];
	//cout << "Enter" << "\n";				// Ввод данных.
	//cout << "\tSurname: ";
	//cin >> fam;
	//cout << "\tName: ";
	//cin >> im;
	//cout << "\tLastname: ";
	//cin >> otch;
	//
	//char* rez = new char[strlen(fam) + strlen(im) + strlen(otch) + 3];   // Резервирование места для результата. Нужно учесть два пробела и результирующий нулевой символ.

	//strcat(strcat(strcpy(rez, fam), " "), im);              //"Сборка" результата.
	//strcat(strcat(rez, " "), otch);
	//delete[] fam;						                // Возврат памяти в кучу. - Удаление
	//delete[] im;
	//delete[] otch;
	//cout << "\nResult: " << rez;				      // Вывод результата.
	//delete[] rez;

	//2-2
	//char* fileName = new char[128];
	//char fileName[128];
	//cout << "Enter the file name: " << "\n";
	//gets_s(fileName);
	//cout << " \n Name file: " << fileName<< "\n";
	//if (strchr(fileName, '.')) {
	//	cout << "Nme has extetion" << endl;
	//}
	//else { strcat(fileName, ".txt"); }                  //Добавление  .txt
	//cout << "\n Name file: " << fileName << endl;
	////delete[]fileName;

	//2-3 Поиск подстрок
	//char filename [128], * p;
	//cout << "Enter name of file: ";
	//gets_s(filename);
	//cout << "\nName of file: " << filename << "\n";
	//_strupr(filename);
	//p = strstr(filename, ".TXT");
	//if (p)
	//	cout << "Name has extension" << "\n";
	//else
	//{
	//	p = strchr(filename, '.');                  //Поиск точки
	//	if (p)
	//		*p = NULL; // Удалить любое другое расширение.
	//	strcat(filename, ".TXT");
	//}
	//cout << "Name of file: " << filename << "\n";
	
	//3. Программа для замены в слове X всех букв «a» на сочетание «ky».
	//int k = 0, i = 0, n;
	//char x1[40], x2[80], * px1, * px2;                          //2 указателя
	//puts("Enter word with text lenght not more 39 litres: ");
	//gets_s(x1);
	//px1 = x1;
	//px2 = x2;
	//n = strlen(x1) + 1;             //измеряем длинна+1
	//while (k < n) {
	//	if (*(px1 + k) != 'a') {
	//		*(px2 + i) = *(px1 + k);
	//		i++; k++;
	//	}
	//	else {
	//		*(px2 + i) = 'k';
	//		*(px2 + i + 1) = 'y';
	//		k++; i += 2;
	//	}
	//}
	//puts(x2);

	//Практика 15. 
	// Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.
	/*char str[100];
	cout << "Enter the string: \n";
	gets_s(str);
	Strset(str);
	cout << "Result: " << str;*/


	//Задание 2. Дана строка символов. Определить количество букв, цифр и остальных символов, присутствующих
	 //в строке.
	/*char str[200];
	cout << "Enter the string: \n";
	gets_s(str);
	StrDigOthCount(str);*/

	//Задание 3. Подсчитать количество слов во введенном предложении.
	char str2[200];
	cout << "Enter the string: \n";
	gets_s(str2);
	StringCount(str);
















}

