#include <iostream>
#include <string>

using namespace std;

class Cat
{
protected:
	 string food1;
public:
	Cat() { food1 = "�����"; }
};

class Dog
{
protected:
	string food2;
public:
	Dog() { food2 = "����"; }
};

class Parrot
{
protected:
	string food3;
public:
	Parrot() { food3 = "�����"; }
};

struct Animal : public Cat, public Dog, public Parrot
{
	void showfood()
	{
		cout << "��� ������ - " << food1 << endl;
		cout << "��� ������ - " << food2 << endl;
		cout << "��� ������� - " << food3 << endl;
	}
	~Animal(){}
};

int main()
{
	setlocale(0, "");
	Animal i;
	i.showfood();
	system("pause");
	return 0;
}
