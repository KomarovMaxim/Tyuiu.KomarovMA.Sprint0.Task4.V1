#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint0.Task4.V1.Lib/Tyuiu.KomarovMA.Sprint0.Task4.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* date = new Service1();
			int a = 6;
			int b = 2;
			int c = 3;
			int d = 9;
			int e;
			e = date->Calculate(a, b, c, d);
			Assert::AreEqual(1, e);
		}
	};
}
