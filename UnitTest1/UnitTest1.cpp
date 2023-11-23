#include "pch.h"
#include "..\\lab 13.1\dod.h"
#include "..\\lab 13.1\sum.h"
#include "..\\lab 13.1\var.h"
#include "..\\lab 13.1\dod.cpp"
#include "..\\lab 13.1\lab.cpp"
#include "..\\lab 13.1\sum.cpp"
#include "..\\lab 13.1\var.cpp"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 1;
			F = 0;
			a = 1.0;

			dod();

			Assert::AreEqual(a,0, 0.2);
	

			

		}
	};
}
