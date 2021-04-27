#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.2/5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time T;
			Assert::AreEqual(T.Time1(0, 0), 0);
		}
	};
}
