// Homework_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>



using namespace std;

//int main()
//{
//	setlocale(0, "");
	//Многомерные массивы
	//Задание 1
	/*int size;
	cout << "Введите размер строки массива" << endl;
	cin >> size;
	cout << "Введите первый элемент" << endl;
	int element;
	cin >> element;
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new int[size];
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = element;
			element *= 2;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;*/

	//Задание 2
	//int num, rad, kol;

	//cout << endl;
	//cout << "Введите число - ";  
	//cin >> num;
	//cout << endl;
	//cout << "Введите ряд - ";
	//cin >> rad; 
	//cout << endl;
	//cout << "Введите колонну - "; 
	//cin >> kol; 
	//cout << endl;

	//int** arr = new int * [rad]; //new int - команда для выделение памяти под массив

	//for (int i = 0; i < rad; i++) //Выделение памяти
	//{
	//	arr[i] = new int[kol];
	//}

	//for (int i = 0; i < rad; i++) 
	//{
	//	for (int j = 0; j < kol; j++)
	//	{
	//		arr[i][j] = num;
	//		num += 1;
	//	}
	//}

	//for (int i = 0; i < rad; i++) 
	//{
	//	

	//	for (int j = 0; j < kol; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < rad; i++)
	//{
	//	delete[] arr[i];
	//}
	//delete[] arr;

	//cout << endl; cout << endl;
	//return 0;
	// 
	//Задание 3
	//int row, col, side, temp, shift;
	//bool flag = true;
	//bool& aFlag = flag;

	//cout << "Програма сдвига массива" << endl << endl;

	//do
	//{
	//	cout << "Введите количество строк до 10: "; 
	//	cin >> row; 
	//	cout << endl;
	//	cout << "Введите количество столбцов до 10: "; 
	//	cin >> col; 
	//	cout << endl << endl;

	//	int** arr = new int * [row]; 

	//	for (int i = 0; i < row; i++) 
	//	{
	//		arr[i] = new int[col];
	//	}

	//	if (col > 10 || col < 0 || row > 10 || row < 0) 
	//	{
	//		cout << "Неверный ввод строки и столбца. Повторите ввод!" << endl;
	//		aFlag = true;
	//	}
	//	else
	//	{
	//		srand(time(0));

	//		//Заполнение массива
	//		for (int i = 0; i < row; i++)
	//		{
	//			for (int j = 0; j < col; j++)
	//			{
	//				arr[i][j] = rand() % 500;
	//			}
	//		}

	//		//Вывод массива
	//		for (int i = 0; i < row; i++)
	//		{

	//			for (int j = 0; j < col; j++)
	//			{
	//				cout << arr[i][j] << " ";
	//			}
	//			cout << endl;
	//		}

	//		cout << endl;

	//		cout << "Сдвиг в массиве можно произвести:\n"
	//			<< "1) Влево;\n"
	//			<< "2) Вправо;\n"
	//			<< "3) Вверх;\n"
	//			<< "4) Вниз;\n"
	//			<< endl << endl;

	//		cout << "Введите сторону сдвига: "; 
	//		cin >> side; 
	//		cout << endl;
	//		cout << "Введите количество сдвигов: "; 
	//		cin >> shift; 
	//		cout << endl;

	//		if (side == 1) // сдвиг влево
	//		{
	//			for (int i = 0; i < shift; i++)
	//			{
	//				for (int j = 0; j < row; j++)
	//				{
	//					temp = arr[j][0];

	//					for (int g = 0; g < col - 1; g++)
	//					{
	//						arr[j][g] = arr[j][g + 1];
	//					}

	//					arr[j][col - 1] = temp;
	//				}
	//			}
	//		}
	//		else if (side == 2) // сдвиг вправо
	//		{
	//			for (int i = 0; i < shift; i++)
	//			{
	//				for (int j = 0; j < row; j++)
	//				{
	//					temp = arr[j][col - 1];

	//					for (int g = col - 1; g > 0; g--)
	//					{
	//						arr[j][g] = arr[j][g - 1];
	//					}

	//					arr[j][0] = temp;
	//				}
	//			}
	//		}
	//		else if (side == 3) // сдвиг вверх
	//		{
	//			for (int i = 0; i < shift; i++)
	//			{
	//				for (int j = 0; j < col; j++)
	//				{
	//					temp = arr[0][j];

	//					for (int g = 0; g < row - 1; g++)
	//					{
	//						arr[g][j] = arr[g + 1][j];
	//					}

	//					arr[row - 1][j] = temp;
	//				}
	//			}
	//		}
	//		else if (side == 4) // сдвиг вниз
	//		{
	//			for (int i = 0; i < shift; i++)
	//			{
	//				for (int j = 0; j < col; j++)
	//				{
	//					temp = arr[row - 1][j];

	//					for (int g = row - 1; g > 0; g--)
	//					{
	//						arr[g][j] = arr[g - 1][j];
	//					}

	//					arr[0][j] = temp;
	//				}
	//			}
	//		}
	//		cout << "Результат сдвига.";
	//		cout << endl;

	//		for (int i = 0; i < row; i++)
	//		{

	//			for (int j = 0; j < col; j++)
	//			{
	//				cout << arr[i][j] << " ";
	//			}
	//			cout << endl;
	//		}

	//		aFlag = false;
	//	}

	//	for (int i = 0; i < row; i++)
	//	{
	//		delete[] arr[i];
	//	}
	//	delete[] arr;

	//} while (aFlag);

	//cout << endl;
	//return 0;

//Задание 4
//int Stepen(int& a, int& b);
//int a;
//int b;
//
//cout << "Возведение числа в степень" << endl;
//cout << "Введите число: "; 
//cin >> a; 
//cout << endl;
//cout << "Введите степень: "; 
//cin >> b; 
//cout << endl;
//
//int resultStepen = Stepen(a, b);
//
//cout << "Результат возведения в степень: " << resultStepen;
//
//cout << endl; cout << endl;
//return 0;
//}
//
//int Stepen(int& a, int& b) 
//{
//	return pow(a, b);
//}
//Задание 5
//int** arr = NULL;
//int size = 4;
//int sum = 0;
//int average = 0;
//
//arr = new int* [size];
//for (int i = 0; i < size; i++)
//	arr[i] = new int[size];
//
//srand(time(NULL));
//for (int i = 0; i < size; i++)
//	for (int j = 0; j < size; j++)
//	{
//		arr[i][j] = rand() % 100;
//		sum = sum + arr[i][j];
//		average = average + arr[i][j] / size;
//		cout << arr[i][j] << "\t |\t";
//	}
//
//int min = arr[0][0];
//int max = arr[0][0];
//
//for (int i = 0; i < size; i++)
//	for (int j = 0; j < size; j++)
//	{
//		if (arr[i][j] < min)
//			min = arr[i][j];
//		if (arr[i][j] > max)
//			min = arr[i][j];
//	}
//
//cout << endl << "Середне арифметическое = " << average << endl;
//cout << "Сума = " << sum << endl;
//cout << "Мин. Элемент = " << min << endl;
//cout << "Макс. Элемент = " << max << endl;
//return 0;
// }
// Функции
// Задание 1
	/*int powInnumber(int number, int powNum)
	{
		if (powNum == 0)
			return 1;
		if (powNum == 1)
			return number;
		int result = number;
		for (int i = 0; i < powNum - 1; i++)
			result *= number;
		return result;
	}
	void main()
	{
		setlocale(0, "");
		int number, powNum;
		cout << "Введите число:";
		cout << endl;
		cin >> number;
		cout << "Введите степень:";
		cout << endl;
		cin >> powNum;
		cout << "Результат = " << powInnumber(number, powNum) << endl;
	}*/
//Задание 2
//void diapozon(int a, int b)
//{
//		
//	int sum = 0;
//	if (a < b)
//	{
//		int i = a + 1;
//		while (i < b)
//		{
//			sum += i;
//			i++;
//		}
//		cout << "Summa is " << sum << endl;
//	}
//	else if (a > b)
//	{
//		int i = b + 1;
//		while (i < a)
//		{
//			sum += i;
//			i++;
//		}
//		cout << "Summa is " << sum << endl;
//	}
//	else
//	{
//		cout << "Summa is " << sum << endl;
//	}
//}
//int main()
//{
//	int c;
//	int d;
//	cout << "Enter first number " << endl;
//	cin >> c;
//	cout << "Enter second number: " << endl;
//	cin >> d;
//	diapozon(c, d);
//	return 0;
//}
// Задание 3
//int PerfectNumber(int a, int b)
//{
//	for (int i = a; i < b; i++)
//	{
//		int result = 0;
//		for (int j = 1; j < i; j++)
//		{
//			if ((i % j) == 0)
//			{
//				result += j;
//			}
//		}
//		if (result == i && result)
//		{
//			return result;
//		}
//	
//	}
//}
//
//void main()
//{
//	int res = PerfectNumber(0, 100);
//	cout << res;
//}
// Задание 4
//void card(int suit, int num)
//{
//	char card[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
//	if (num == 10)
//		cout << card[num - 1];
//	else cout << card[num - 1];
//	switch (suit)
//	{
//	case 1: cout << " Черви " <<  endl; break;
//	case 2: cout << " Крести " << endl; break;
//	case 3: cout << " Буби " << endl; break;
//	case 4: cout << " Пики " << endl; break;
//	}
//	if (num == 10)cout << card[num - 1];
//}
//
//int main()
//{
//	setlocale(0, "");
//	int a, s;
//	cout << "Введите карту.\n1 - Туз. \n2 - Двойка.\n3 - Тройка.\n4 - Четверка.\n5 - Пятерка.\n6 - Шестерка.\n7 - Семерка.\n8 - Восьмерка.\n9 - Девятка.\n10 - Десятка.\n11 - Валлет.\n12 - Королева.\n13 - Король." << endl;
//	cin >> a;
//	cout << endl << "Масть\n1. Черви.\n2. Крести.\n3. Буби.\n4. Пики.\n";
//	cout << "Введите масть. ";
//	cin >> s;
//	card(s, a);
//}
// Задание 5



