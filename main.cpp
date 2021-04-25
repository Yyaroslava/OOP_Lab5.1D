// lab5.1D.cpp 
#include <iostream>
#include "BadException.h"
#include "LongLong.h"

using namespace std;

int main() {
	LongLong A, B;

	try {
		cout << "Enter A: " << endl;
		cin >> A;
		cout << "Enter B: " << endl;
		cin >> B;

		cout << "A + B: " << endl;
		cout << A + B << endl;

		cout << "A * B: " << endl;
		cout << A * B << endl;

		cout << "A > B " << endl;
		if (A > B) {
			cout << "Yes " << endl;
		}
		else {
			cout << "No " << endl;
		}

		cout << "A < B " << endl;
		if (A < B) {
			cout << " Yes " << endl;
		}
		else {
			cout << "No " << endl;
		}

		cout << "A == B " << endl;
		if (A == B) {
			cout << "Yes " << endl;
		}
		else {
			cout << "No " << endl;
		}
	}
	catch (invalid_argument e) {
		cout << e.what() << endl;
	}
	catch (bad_exception e) {
		cout << e.what() << endl;
	}
	catch (BadException& e) {
		cout << e.what() << endl;
	}
	catch (const char* e) {
		cerr << e << endl;
	}

	return 0;
}
