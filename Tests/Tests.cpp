#include <iostream>
#include "gtest/gtest.h"

#include <locale>
#include <Coder74.h>

void TestEncode()
{
	std::vector<uint8_t> input = { 1, 1, 0, 1 }, output(7);
	std::cout << "Input Vector" << std::endl;
	for (int i = 0; i < 4; i++) std::cout <<  (int) input[i] << ' ';
	std::cout << std::endl << std::endl << "Output Vector" << std::endl;
	Coder74 coder;
    output = coder.Encode(input);
	for (int i = 0; i < 7; i++) std::cout << (int)output[i] << ' ';
	std::cout << std::endl;
}


TEST(testVector, testEncode){
	
	std::vector<uint8_t> vectorInput = { 0, 1, 0, 0 }, vectorRef = { 0, 1, 0, 0, 1, 1, 1 }, vectorOutput(7);
	Coder74 coder;
    vectorOutput = coder.Encode(vectorInput);

	for (int i = 0; i < 7; i++) {
		ASSERT_EQ(vectorOutput[i], vectorRef[i]) << "Žøèáêà";
	}
}

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "Russian");
	TestEncode();
	
    /*
    Coder *coder = new Coder74();
    coder->Encode(input);*/

	
    ::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
