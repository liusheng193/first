// FirstTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <gtest/gtest.h>
#include "new.h"


TEST(FooTest, HandleNoneZeroInput)
{
	
	EXPECT_ANY_THROW(Func(10, 0));
    EXPECT_THROW(Func(0, 5), char*);
	//EXPECT_EQ(1, 1);
}



int _tmain(int argc, _TCHAR* argv[])
{
	testing::GTEST_FLAG(output) = "xml:";
	testing::InitGoogleTest(&argc, argv);
	printf("first!");
	 return RUN_ALL_TESTS();
}

