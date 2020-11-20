#ifndef CODER74_H
#define CODER74_H

#include "Coder.h"

class Coder74 : public Coder
{
    public:
        Coder74();
        virtual std::vector<uint8_t> Encode(const std::vector<uint8_t> &kData);
    protected:
    private:
};

#endif // CODER74_H