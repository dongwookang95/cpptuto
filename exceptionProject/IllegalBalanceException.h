#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__

class IllegalBalanceException
{
public:
    IllegalBalanceException() {}
    ~IllegalBalanceException() {}
    virtual const char *what() const noexcept{
        return "Illegal balance exception";
    }
};

#endif // __INSUFFICIENT_FUNDS_EXCEPTION_H__
