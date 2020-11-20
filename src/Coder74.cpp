#include "Coder74.h"

Coder74::Coder74(){}

std::vector<uint8_t> Coder74::Encode(const std::vector<uint8_t> &kData)
{
	const size_t kSize = kData.size();
	if (kSize != 4) return {};

	std::vector<uint8_t> tmp;
	tmp.reserve(kSize + 3);
		
	tmp = kData;
	tmp.push_back(tmp[0] ^ tmp[1] ^ tmp[2]);
	tmp.push_back(tmp[1] ^ tmp[2] ^ tmp[3]);
	tmp.push_back(tmp[0] ^ tmp[1] ^ tmp[3]);
	return tmp;
}

