#include <iostream>
#include <string>
using namespace std;

template <class type>
class arrays  //объявления класса массива
{
	int size;
	type* ar;
public:
	arrays(int size)//конструктор по умолчнию
	{
		this->size = size;
		ar = new type[size];
	}

	~arrays()//деструктор
	{
		delete[] ar;
	}

	arrays(const arrays& r)//конструктор копирования
	{
		size = r.size;
		ar = new type[size];
		for (int i = 0; i < r.size; i++)
		{
			ar[i] = r.ar[i];
		}
	}

	void input(int position, type element)// функция ввода элемента
	{
		ar[position] = element;
	}

	void show()//функция вывода массива на экран
	{
		for (int i = 0; i < size; i++)
		{
			cout << ar[i] << endl;
		}
		cout << endl;
	}

	int Get_size()// функция возращающая размер массива
	{
		return size;
	}

	type operator[](int i)
	{
		return ar[i];
	}

	arrays& operator=(const arrays& right) // перегрузка оператора присваивания
	{

		for (int i = 0; i < right.size; i++)
		{
			ar[i] = right.ar[i];
		}
		return *this;
	}

	arrays& operator-(arrays l)//перегрузка оператора вычитания массива
	{
		for (int i = 0; i < l.size; i++)
		{
			ar[i] = ar[i] - l.ar[i];
		}
		return *this;
	}

	arrays& operator-(type i)// перегрузка оператора вычитания элемента из массива
	{
		ar[size - 1] = ar[size - 1] - i;
		return *this;
	}

};

class Polz//пользовательский класс 
{
public:
	Polz(int _x = 0, int _y = 0) : x(_x), y(_y) {}//конструктор по умолчнию

	Polz(const Polz& copy)//конструктор копирования
	{
		x = copy.x;
		y = copy.y;
	}

	void Show() const//функция показа точки
	{
		cout << " (" << x << "," << y << ")" << endl;
	}

	Polz& operator =(const Polz& a)//перезрузка оператора присваивания
	{
		x = a.x;
		y = a.y;
		return *this;
	}

	const Polz operator -(const Polz& a)//перезрузка оператора вычитания
	{

		return Polz(x - a.x, y - a.y);
	}
	int x, y;

	friend ostream& operator<< (ostream& out, const Polz& Polz);
};

ostream& operator<< (ostream& out, const Polz& point)// перегрузка оператора вывода для класса Point
{
	out << " (" << point.x << "," << point.y << ")";
	return out;
}

int main()
{
	setlocale(LC_ALL, "rus");
	arrays <double> b(10);
	cout << "array b(10) заполненый числами." << endl;
	for (int i = 0; i < 10; i++)
	{
		b.input(i, i + 1);
	}
	b.show();
	cout << "array a = b " << endl;
	arrays <double> a = b;
	a.show();
	cout << "array c = a - b " << endl;
	arrays <double> c(10);
	c = a - b;
	c.show();
	cout << "array c = c - 4 " << endl;
	c = c - 4;
	c.show();

	arrays <Polz> b1(10);
	cout << "array b1(10) заполненый объектами класса Polz." << endl;
	for (int i = 0; i < 10; i++)
	{
		b1.input(i, Polz(i + 1, i));
	}
	b1.show();
	cout << "array a1 = b1 " << endl;
	arrays <Polz> a1 = b1;
	a1.show();
	cout << "array c1 = a1 - b1 " << endl;
	arrays <Polz> c1(10);
	c1 = a1 - b1;
	c1.show();
	cout << "array c1 = c1 - Polz(100, 100) " << endl;
	c1 = c1 - Polz(100, 100);
	c1.show();
}
