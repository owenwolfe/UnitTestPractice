/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

//creating a test for has_mixed_case function
TEST(PasswordTest, mixed_case)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("AbCdEfGhIjKlMnOpQrStUvWxYz");
    ASSERT_TRUE(actual);
}

//for all upper case letters
TEST(PasswordTest, all_upper_case)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    ASSERT_FALSE(actual);
}

//for all lower case letters
TEST(PasswordTest, all_lower_case)
{
    Password my_password;
    bool actual = my_password.has_mixed_case("abcdefghijklmnopqrstuvwxyz");
    ASSERT_FALSE(actual);
}
