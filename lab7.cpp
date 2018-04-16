#include <iostream>
#include <string>

using namespace std;

class Cat
{
protected:
	 string food1;
public:
	Cat() { food1 = "Рыбка"; }
};

class Dog
{
protected:
	string food2;
public:
	Dog() { food2 = "Мясо"; }
};

class Parrot
{
protected:
	string food3;
public:
	Parrot() { food3 = "Зерно"; }
};

struct Animal : public Cat, public Dog, public Parrot
{
	void showfood()
	{
		cout << "Еда Котика - " << food1 << endl;
		cout << "Еда Собаки - " << food2 << endl;
		cout << "Еда Попугая - " << food3 << endl;
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
