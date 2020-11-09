# include <iostream>
using namespace std;
class Object
{
public:
	virtual string getName() {
		return " ";
	}
};

class Phone : public Object
{
public:
	virtual string getName() {
		return "Phone";
	}
};

class Tablet : public Object
{
public:
	virtual string getName() {
		return "IPad";
	}
};

int main() {
	Phone phone;
	Tablet tablet;
	Object& obj = phone;
	cout<< "Phone is " << obj.getName()<<endl;
	Object& obj1 = tablet;
	cout << "Tablet is " << obj1.getName() << endl;
	

}