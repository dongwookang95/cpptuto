#ifndef __InsufficientFundsException_H__
class InsufficientFundsException
{
public:
    InsufficientFundsException() {}
    ~InsufficientFundsException() {}
    virtual const char *what() const noexcept{
        return "Insufficient balance exception";
    }
};

#endif // __InsufficientFundsException_H__