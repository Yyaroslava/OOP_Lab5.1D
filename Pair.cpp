// Pair.cpp
#include "Pair.h"

void Pair::SetFirst(long first) { this->first = first; }
void Pair::SetSecond(long second) { this->second = second; }
double Pair::GetFirst() const { return first; }
double Pair::GetSecond() const { return second; }

Pair::Pair() { SetFirst(0); SetSecond(0); }

Pair::Pair(long first = 0, long second = 0)throw(invalid_argument, bad_exception, BadException, const char*) {
	if (first == 1 && second == 1) {
		throw invalid_argument("Invalid_argument");
	}
	else if (first == 2 && second == 2) {
		throw bad_exception();
	}
	else if (first == 3 && second == 3) {
		throw BadException("MyException");
	}
	else if (first == 4 && second == 4) {
		throw "Exception";
	}
	SetFirst(first);
	SetSecond(second);
}

Pair::Pair(Pair& A) {
	SetFirst(A.GetFirst());
	SetSecond(A.GetSecond());
}

bool operator> (Pair& A, Pair& B) {
	return ((A.GetFirst() > B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() > B.GetSecond()));
}

bool operator< (Pair& A, Pair& B) {
	return ((A.GetFirst() < B.GetFirst()) || (A.GetFirst() == B.GetFirst() && A.GetSecond() < B.GetSecond()));
}

bool operator== (Pair& A, Pair& B) {
	return (A.GetFirst() == B.GetFirst() && A.GetSecond() == B.GetSecond());
}

Pair::operator string() const {
	stringstream ss;
	ss << "High digit: " << first << endl;
	ss << "Low digit: " << second << endl;
	return ss.str();
}

ostream& operator<< (ostream& out, const Pair& A) {
	out << string(A);
	return out;
}

istream& operator>> (istream& in, Pair& A) {
	double first, second, third;
	cout << "Enter high digit: ";
	in >> first;
	cout << "Enter low digit ";
	in >> second;

	A.SetFirst(first);
	A.SetSecond(second);
	return in;
}
