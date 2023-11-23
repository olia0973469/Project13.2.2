#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 2;
			int result = LINE_NUMBER;
			Assert::AreEqual(result, 16);
		}
	};
}
