#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab5.1D/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair A1(4, 6), A2(3, 7);
			Assert::AreEqual(A1 == A2, false);
		}
	};
}
