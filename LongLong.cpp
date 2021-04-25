// LongLong.cpp
#include "LongLong.h"

LongLong::LongLong() : LongLong(0, 0) {}
LongLong::LongLong(long first, long second) : Pair(first, second) {}
LongLong::LongLong(LongLong& A) : Pair(A.GetFirst(), A.GetSecond()) {}

LongLong operator +(LongLong& A, LongLong& B) {
	LongLong t(A.GetFirst() + B.GetFirst(), A.GetSecond() + B.GetSecond());
	return t;
}

LongLong operator *(LongLong& A, LongLong& B) {
	LongLong t(A.GetFirst() * B.GetFirst(), A.GetSecond() * B.GetSecond());
	return t;
}
