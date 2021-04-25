// Pair.h
#pragma once
#include <iostream>
#include <sstream>
#include "BadException.h"

using namespace std;

class Pair {
private:
	double first, second;
public:
	void SetFirst(long);
	void SetSecond(long);
	double GetFirst() const;
	double GetSecond() const;

	Pair();
	Pair(long, long) throw(invalid_argument, bad_exception, BadException, const char*);
	Pair(Pair&);

	friend bool operator> (Pair&, Pair&);
	friend bool operator< (Pair&, Pair&);
	friend bool operator== (Pair&, Pair&);

	operator string() const;
	friend ostream& operator<< (ostream&, const Pair&);
	friend istream& operator>> (istream&, Pair&);
};
