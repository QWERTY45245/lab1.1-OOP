#include "pch.h"
#include "CppUnitTest.h"
#include "../IntRange.h"  // Припускаючи, що у вас є окремий файл IntRange.h
#include "../IntRange.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestRangeCheckValid)
		{
			// Arrange
			IntRange range;
			range.Init(10, 20, 15);

			// Act
			bool result = range.rangeCheck();

			// Assert
			Assert::IsTrue(result);
		}

		TEST_METHOD(TestRangeCheckInvalid)
		{
			// Arrange
			IntRange range;
			range.Init(30, 40, 25);

			// Act
			bool result = range.rangeCheck();

			// Assert
			Assert::IsFalse(result);
		}
	};
}
