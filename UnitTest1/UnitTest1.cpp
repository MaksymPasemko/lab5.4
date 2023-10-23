#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.4/pr5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S0(1,1);
			Assert::AreEqual(t, 0.266176, 0.000001);
		}
	};
}
//double S0(const int K, const int N)
//{
	//double s = 0;
	//for (int i = K; i <= N; i++)
		//s += (sin(i) * cos(i)) / (1 + pow(sin(i), 2));
	//return s;
//}