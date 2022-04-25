#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab12_4.2\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(edit("C:\\Users\\Arsen\\Desktop\\Arsen\\2 семестр\\ПКР\\Лаби\\Lab12_4.2\\Lab12_4.2\\t1", "C:\\Users\\Arsen\\Desktop\\Arsen\\2 семестр\\ПКР\\Лаби\\Lab12_4.2\\Lab12_4.2\\t2"));
		}
	};
}
