#include <iostream>
#include <vector>
#include "Examples.cpp"

template <typename T>
class Storage
{
    T value{};
public:
    Storage(T value) : value{ value } {}
    void info()
    {
        std::cout << "value = " << value << "\n";
    }
};

template <>
void Storage<double>::info()
{
    std::cout << "value = " << std::scientific << value << "\n";
};

template <typename T>
class Storage<T*>
{
    T* pvalue;
public:
    Storage(T* pvalue) : pvalue{ pvalue } {}
    void info();
   /* {
        if(pvalue)
            std::cout << "value = " << *pvalue << "\n";
    }*/
};
template <typename T>
void Storage<T*>::info()
{
    if (pvalue)
        std::cout << "value = " << *pvalue << "\n";
}


int main()
{
    //Storage8Example();
    Storage<int> is(10);
    Storage<double> ds(20.56);
    is.info();
    ds.info();

    double dvalue{ 123.456 };
    double* dptr{ &dvalue };
    Storage ps{ dptr };
    ps.info();

}
