#ifndef IOP_COP0_HPP
#define IOP_COP0_HPP
#include <cstdint>

struct IOP_Cop0_Status
{
    bool IEc;
    bool KUc;
    bool IEp;
    bool KUp;
    bool IEo;
    bool KUo;
    uint8_t Im;

    bool bev;

};

class IOP_Cop0
{
    public:
        IOP_Cop0_Status status;
        IOP_Cop0();

        void reset();

        uint32_t mfc(int cop_reg);
        void mtc(int cop_reg, uint32_t value);
};

#endif // IOP_COP0_HPP