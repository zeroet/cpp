#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	int _power;
	int _health;
	string _name;

public:
	void attack(Player& target)
	{
		cout << "Attack" << _name << "->" << target._name << endl;
		target.damaged(_power);
	}
	
	void damaged(int power)
	{
		_health -= power;
		if (_health <= 0)
			cout << "Died " << _name << endl;
	}
};


int main()
{
	Player	david = { 100, 200, "David" };
	Player	daniel = { 200, 100, "Daniel" }; 

	david.attack(david);
	david.attack(david);
}
