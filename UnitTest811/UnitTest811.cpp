#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab8_1_1/lab8_1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char a[6] = ",a,a,";
			int t = ThirdComma(a);
			Assert::AreEqual(t, 4);
		}
	};
}

