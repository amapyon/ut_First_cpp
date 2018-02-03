/*
 * FirstTest.cpp
 */
#include <gtest/gtest.h>

using namespace std;

TEST(StringTest, ConcatString) {
	ASSERT_EQ("abc", "ab" "c") << "文字列が連結できること";
}

/*
class FirstTest : public testing::Test {
protected:
	void SetUp() {
		cout << "SetUp" << endl;
	}

	void TearDown() {
		cout << "TearDown" << endl;
	}

//	static void SetUpTestCase() {
//		cout << "SetUpTestCase" << endl;
//	}

//	static void TearDownTestCase() {
//		cout << "TearDownTestCase" << endl;
//	}
};

TEST_F(FirstTest, TestA) {
	cout << "TestA" << endl;
	SUCCEED() << "TestA";
}

TEST_F(FirstTest, TestB) {
	FAIL();
	cout << "TestB" << endl;
}
*/
