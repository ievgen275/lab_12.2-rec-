#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_12.2(rec)/PR_12.2(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
        TEST_METHOD(TestAppendRecursive)
        {
            Info testData1 = 10;
            Info testData2 = 20;
            Info testData3 = 30;

            appendRecursive(p, testData1);
            appendRecursive(p, testData2);
            appendRecursive(p, testData3);

            Assert::AreEqual(testData1, p->info);
            Assert::AreEqual(testData2, p->link->info);
            Assert::AreEqual(testData3, p->link->link->info);
        }
	};
}
