//#include <iostream>
//
//
//template <typename T>
//class Storage8
//{
//    T array[8];
//public:
//    void set(int index, const T& value)
//    {
//        array[index] = value;
//    }
//
//    const T& get(int index) const
//    {
//        return array[index];
//    }
//};
//
//template <>
//class Storage8<bool>
//{
//    std::uint8_t data;
//public:
//    void set(int index, bool value)
//    {
//        auto mask{ 1 << index };
//        if (value)
//            data |= mask;
//        else
//            data &= ~mask;
//    }
//
//    bool get(int index)
//    {
//        auto mask{ 1 << index };
//        return mask & data;
//    }
//};
//
//void Storage8Example()
//{
//    Storage8<int> intStorage;
//
//    for (int i{}; i < 8; i++)
//        intStorage.set(i, (i + 1) * 2);
//    for (int i{}; i < 8; i++)
//        std::cout << intStorage.get(i) << " ";
//    std::cout << "\n";
//
//    Storage8<bool> boolStorage;
//    for (int i{}; i < 8; i++)
//        boolStorage.set(i, i & 3);
//
//    std::cout << std::boolalpha;
//    for (int i{}; i < 8; i++)
//        std::cout << boolStorage.get(i) << " ";
//    std::cout << "\n";
//}
//
//
//
//
//
//template <typename T>
//void sum(T a, T b)
//{
//    std::cout << a + b << "\n";
//}
//
//// перегрузка
////void sum(double a, double b)
////{
////    std::cout << std::scientific << a + b << "\n";
////}
//
//// явная специализация шаблона
//template <>
//void sum<double>(double a, double b)
//{
//    std::cout << std::scientific << a + b << "\n";
//}
//
//template <>
//void sum<char>(char a, char b)
//{
//    std::cout << (char)(a + b) << "\n";
//}