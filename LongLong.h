// LongLong.h
#pragma once
#include "Pair.h"

class LongLong :public Pair {
public:
	LongLong();
	LongLong(long, long);
	LongLong(LongLong&);

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);
};
