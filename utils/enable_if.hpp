#ifndef UNTITLED_ENABLE_IF_HPP
#define UNTITLED_ENABLE_IF_HPP
//https://eli.thegreenplace.net/2014/sfinae-and-enable_if/

//если предикат вернет true пойдет во вторую версию
//отключает ненужные перегрузки



//компилятор пытается сделать шаблонную подстановку
//идет в общую специализацию и получает void а такой шаблонной подстановки нет и отваливается
namespace ft {
template <bool, class T = void>
struct enable_if
{};

//идет  в специализацию true и получает тот самый тип и находит нужную специализ/перегрузку
template <class T>
struct enable_if<true, T> {
    typedef T type;
};
}

#endif //UNTITLED_ENABLE_IF_HPP
