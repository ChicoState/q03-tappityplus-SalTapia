/**
 * Unit Test suite
**/

#include <gtest/gtest.h>
#include "tappity.h"

class tappityTest : public ::testing::Test
{
	protected:
		tappityTest(){} 
		virtual ~tappityTest(){} 
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(tappityTest, Test00){
	
	tappity tappity00(" ");
	tappity00.entry(" ");
	ASSERT_EQ(tappity00.length_difference(),0);
}
TEST(tappityTest, Test01){
	
	tappity tappity01("a");
	tappity01.entry("a");
	ASSERT_EQ(tappity01.length_difference(),0);
}
TEST(tappityTest, Test02){
	
	tappity tappity02("abc");
	tappity02.entry("abc");
	ASSERT_EQ(tappity02.length_difference(),0);
}
TEST(tappityTest, Test03){
	
	tappity tappity03("aBc");
	tappity03.entry("abc");
	ASSERT_EQ(tappity03.length_difference(),1);
}
TEST(tappityTest, Test04){
	
	tappity tappity04("abc");
	tappity04.entry("a");
	ASSERT_EQ(tappity04.length_difference(),2);
}
TEST(tappityTest, Test05){
	
	tappity tappity05("a");
	tappity05.entry("abc");
	ASSERT_EQ(tappity05.length_difference(),2);
}
TEST(tappityTest, Test06){
	
	tappity tappity06("ABC47");
	tappity06.entry("AVV47");
	ASSERT_EQ(tappity06.length_difference(),2);
}
TEST(tappityTest, Test07){
	
	tappity tappity07(" ");
	tappity07.entry("1");
	ASSERT_EQ(tappity07.length_difference(),1);
}
TEST(tappityTest, Test08){
	
	tappity tappity08("1");
	tappity08.entry(" ");
	ASSERT_EQ(tappity08.length_difference(),1);
}
TEST(tappityTest, Test09){
	
	tappity tappity09(" ");
	tappity09.entry(" ");
	ASSERT_EQ(tappity09.accuracy(),100);
}
TEST(tappityTest, Test10){
	
	tappity tappity10("a");
	tappity10.entry("a");
	ASSERT_EQ(tappity10.accuracy(),100);
}
TEST(tappityTest, Test11){
	
	tappity tappity12("abc");
	tappity12.entry("abc");
	ASSERT_EQ(tappity12.accuracy(),100);
}
TEST(tappityTest, Test13){
	
	tappity tappity13("abc");
	tappity13.entry("aBc");
	ASSERT_EQ(tappity13.accuracy(),66);
}
TEST(tappityTest, Test14){
	
	tappity tappity14("a");
	tappity14.entry("BBaCC");

	ASSERT_EQ(tappity14.accuracy(),0);
}
TEST(tappityTest, Test15){
	
	tappity tappity15("aabbcc");
	tappity15.entry("a");
	ASSERT_EQ(tappity15.accuracy(),16);
}
TEST(tappityTest, Test16){
	
	tappity tappity16("ABC47");
	tappity16.entry("AVV47");
	ASSERT_EQ(tappity16.accuracy(),60);
}
TEST(tappityTest, Test17){
	
	tappity tappity17("1234567");
	tappity17.entry("1234567");
	ASSERT_EQ(tappity17.accuracy(),100);
}
TEST(tappityTest, Test18){
	
	tappity tappity18(" ");
	tappity18.entry("1");
	ASSERT_EQ(tappity18.accuracy(),0);
}
TEST(tappityTest, Test19){
	
	tappity tappity19("1");
	tappity19.entry(" ");
	ASSERT_EQ(tappity19.accuracy(),0);
}