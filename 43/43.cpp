// 43.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//https://www.youtube.com/watch?v=_WGNSVDb0t8&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=53
//Рекурсия что это. Рекурсия программирование. Рекурсия и цикл. Рекурсия с++
#include <iostream>
using namespace std;
int foo(int a)
{
	if (a < 1)
		return 0;

	a--;
	cout << a << endl;
	return foo(a);
}

int main()
{
	foo(5);
	
}

