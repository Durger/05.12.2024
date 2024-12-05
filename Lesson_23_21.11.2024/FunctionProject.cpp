#include <iostream>
#include <typeinfo>
using namespace std;

//Практика 17-1
// Задание 1. Написать программу, которая удаляет из двухмерного массива, заполненного случайными числами
// строки, содержащие нулевые элементы.

auto deleteFrom2LayersArray0Number(float a, int b, int c) -> decltype((a + b) / c)
{
   return (a + b) / c;
}