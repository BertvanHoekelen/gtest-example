#include "foo.h"
#include "FooTest.h"

FooTest::FooTest() {
}

FooTest::~FooTest() {};

void FooTest::SetUp() {};

void FooTest::TearDown() {};

TEST_F(FooTest, itShouldReturnWhatItGets) {
    Foo foo;
    EXPECT_EQ(foo.shouldReturnWhatItGets(true), true);
    EXPECT_EQ(foo.shouldReturnWhatItGets(false), false);
}