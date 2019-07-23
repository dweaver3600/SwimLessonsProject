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
		return houseNumber + " " + street + "\n\t " + city + ", " + state + " " + zip;
	}
};

class Patron {
public:

	//Default Constructor
	Patron() {
		fname_ = "<FNAME>";
		lname_ = "<LNAME>";

		age_ = 0;

		gender_ = '0';

		phone_ = "<PHONE_NUMBER>";

		address_.houseNumber = "0";
		address_.street = "<STREET>";
		address_.city = "<CITY>";
		address_.state = "<STATE>";
		address_.zip = "<ZIP_CODE>";
	}

	string fname_;
	string lname_;
	int age_;

	char gender_;
	string phone_;

	address address_;

	Patron(string fnam, string lnam, int ag, char gen, string phn, string hnum, string strt, string cty, string state, string zip) {
		fname_ = fnam;
		lname_ = lnam;

		age_ = ag;

		gender_ = gen;

		phone_ = phn;

		address_.houseNumber = hnum;
		address_.street = strt;
		address_.city = cty;
		address_.state = state;
		address_.zip = zip;
	}

	// a class number to reference
	//	create a struct for each class that exists
	//	 - time
	//	 - class level (maybe name too)
	//	 - pool location

	void print_patron() {
		cout << "Name:\t " << fname_ << " " << lname_ << "\n"
			<< "Age:\t " << age_ << "\n"
			<< "Gender:\t " << gender_ << "\n"
			<< "Address: " << address_.streetAddress();
	}
};

int main() {
	Patron child2;
	child2.print_patron();

	cout << "\n\n";

	Patron child("Charles", "Denti", 7, 'M', "(714)979-9797", "6776", "Madup Lane", "La Palma", "CA", "92804");
	child.print_patron();

	PAUSE
}
