#include <iostream>
#include <string>

#define PAUSE std::cout << "\n"; system("pause");

using namespace std;

struct address {
	string houseNumber;
	string street;
	string city;
	string state;
	string zip;

	string streetAddress() {
		return houseNumber + " " + street + "\n\t" + city + ", " + state + " " + zip;
	}
};

class Patron {

public:	
	string fname_;
	string lname_;
	int age_;

	char gender_;
	string phone_;

	address address_;

	// a class number to reference
	//	create a struct for each class that exists
	//	 - time
	//	 - class level (maybe name too)
	//	 - pool location

	void print_patron() {
		cout << "Name:\t" << fname_ << " " << lname_ << "\n"
			<< "Age:\t" << age_ << "\n" << "Gender:\t" << gender_ << "\n"
			<< "Address: " << address_.streetAddress();
	}
};

int main() {
	Patron child1;

	child1.fname_ = "Charles";
	child1.lname_ = "Denti";

	child1.age_ = 7;

	child1.gender_ = 'M';

	child1.phone_ = "(714)979-9797";

	child1.address_.houseNumber = "6776";
	child1.address_.street = "Madup Lane";
	child1.address_.city = "La Palma";
	child1.address_.state = "CA";
	child1.address_.zip = "92804";

	child1.print_patron();

	PAUSE
}
