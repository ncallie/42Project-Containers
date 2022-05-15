//
// Created by Nadia Callie on 5/7/22.
//

#ifndef UNTITLED_LESS_HPP
#define UNTITLED_LESS_HPP
namespace ft {

    template<class A1, class A2, class R>
    struct binary_function {
        typedef A1 first_argument_type;
        typedef A2 second_argument_type;
        typedef R result_type;
    };

    template<class T>
    struct less : binary_function <T, T, bool> {
        bool operator()(const T &x, const T &y) const {
            return x < y;
        }
    }; /* less */
}

#endif //UNTITLED_LESS_HPP
