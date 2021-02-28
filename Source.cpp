#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
private:
	double a;
	double b;
	double c;
public:
    double Geta() { return a; }
	double Getb() { return b; }
	double Getc() { return c; }

	void Seta(double x) { a = x; }
	void Setb(double y) { b = y; }
	void Setc(double z) { c = z; }

    triangle(double x, double y, double z)
	{
		a = x;
		b = y;
		c = z;
	}

	~triangle() {}

	double Per(double x, double y, double z)
	{
		return (x + y + z) ;
	}

	double Square(double x, double y, double z)
	{
		double p,s;

		p = x + y + z;
		s=sqrt(p * (p - x) * (p - y) * (p - z));
		return s;
	}

	void Sin_Tr(double x, double y, double z)
	{
		double cosa, cosb, cosc;
		cosa=(x * x - y * y - z * z) / (-2 * y * z); 
		cosb = (y * y - x * x - z * z) / (-2 * x * z);
		cosc= (z * z - x * x - y * y) / (-2 * x * y);
		cout << "\n Кут між сторонами a та b : arc "<<cosa<<"\n Mіж сторонами b та c : arc "<<cosb<<"\n Mіж сторонами a та c : arc "<<cosc;
	}

};

int main()
{
	system("chcp 1251");
	double x, y, z;
	cout << "Введіть 1-шу сторону трикутника : ";
	cin >> x;
	cout << "Введіть 2-гу сторону трикутника : ";
	cin >> y;
	cout << "Введіть 3-тю сторону трикутника : ";
	cin >> z;
	if ((x + y) < z || (x + z) < y || (y + z) < x)
	{
		cout << "Помилка введення даних";
		return 0;
	}
	triangle sd2(x, y, z);
	cout << " Периметр трикутника : " << sd2.Per(x, y, z) <<" \n Площа трикутника :" << sd2.Square(x, y, z);
	sd2.Sin_Tr(x, y, z);
	return 0;
}