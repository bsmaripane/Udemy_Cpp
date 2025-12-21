#include "Mystring.h"

std::ostream& operator<<(std::ostream& os, const Mystring& rhs)
{
    // TODO: insert return statement here
}

std::istream& operator>>(std::istream& in, const Mystring& rhs)
{
    // TODO: insert return statement here
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
