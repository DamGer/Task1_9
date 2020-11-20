#ifndef CODER_H
#define CODER_H

#include <cstdint>
#include <vector>

class Coder
{
    public:
        virtual std::vector<uint8_t> Encode(const std::vector<uint8_t> &kData) = 0;
    protected:
    private:
};

#endif // CODER_H
