#include <iostream>
#include <typeinfo>
using namespace std;

//�������� 17-1
// ������� 1. �������� ���������, ������� ������� �� ����������� �������, ������������ ���������� �������
// ������, ���������� ������� ��������.

auto deleteFrom2LayersArray0Number(float a, int b, int c) -> decltype((a + b) / c)
{
   return (a + b) / c;
}