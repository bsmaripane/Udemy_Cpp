#include "Mystring.h"

std::ostream& operator<<(std::ostream& os, const Mystring& rhs)
{
    os << rhs.str;
    return os;
}

std::istream& operator>>(std::istream& in, const Mystring& rhs)
{
    char* buff{ new char[1000] };
    in >> buff;
    rhs = Mystring{ buff };
    delete[] buff;

    return in;
}

bool operator==(const Mystring& lhs, const Mystring& rhs)
{
    return (std::strcmp(lhs.str, rhs.str) == 0) ? true : false;
}

bool operator!=(const Mystring& lhs, const Mystring& rhs)
{
    return  (std::strcmp(lhs.str, rhs.str) != 0) ? true : false;
}

bool operator<(const Mystring& lhs, const Mystring& rhs)
{
    return  (std::strcmp(lhs.str, rhs.str) < 0) ? true : false;
}

bool operator>(const Mystring& lhs, const Mystring& rhs)
{
    return  (std::strcmp(lhs.str, rhs.str) > 0) ? true : false;
}

Mystring operator-(const Mystring& obj)
{
    char* buff{ new char[std::strlen(obj.str) + 1] };
    std::strcpy(buff, obj.str);

    for (size_t i{ 0 }; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);

    Mystring temp{ buff };
    delete[] buff;

    return temp;
}

Mystring operator+(const Mystring& lhs, const Mystring rhs)
{
    char* buff{ new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1] };
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    Mystring temp{ buff };
    delete[] buff;

    return temp;
}

Mystring operator+=(const Mystring rhs)
{
    return Mystring();
}

Mystring::Mystring() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char* s) : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring& source) : str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor" << std::endl;
}

Mystring::Mystring(Mystring&& source) : str(source.str)
{
    source.str = nullptr;
    std::cout << "move constructor used" << std::endl;
}

Mystring::~Mystring() { delete[] str; }

Mystring& Mystring::operator=(const Mystring& rhs)
{
    std::cout << "Using copy assignmnet" << std::endl;

    if (this == &rhs) return *this;
    delete[] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs)
{
    std::cout << "using move assignment" << std::endl;

    if (this == &rhs) return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

void Mystring::display() const { std::cout << (str ? str : "(NULL)") << ": " << get_length() << std::endl; }

int Mystring::get_length() const { return static_cast<int>(str ? std::strlen(str) : 0); }

const char* Mystring::get_str() const { return str; }
