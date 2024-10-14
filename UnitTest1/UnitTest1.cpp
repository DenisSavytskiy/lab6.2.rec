#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№6.2.рек/AP_Lab№6.2.рек.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestGenerateArray)
        {
            const int size = 10;
            int a[size];
            generateArray(a, size);

            for (int i = 0; i < size; i++) {
                Assert::IsTrue(a[i] >= -10 && a[i] <= 35);
            }
        }

        TEST_METHOD(TestFindElement)
        {
            const int size = 5;
            int a[size] = { 1, 2, 3, 4, 5 };
            int index = findElement(a, size, 0, 6, -1);
            Assert::AreEqual(1, index);
        }

        TEST_METHOD(TestReplaceElements)
        {
            int index = 1;
            int a[5] = { 1, 2, 3, 4, 5 };
            replaceElements(a, index);

            Assert::AreEqual(1, a[0]);
            Assert::AreEqual(0, a[1]);
            Assert::AreEqual(3, a[2]);
            Assert::AreEqual(4, a[3]);
            Assert::AreEqual(5, a[4]);
        }
    };
}