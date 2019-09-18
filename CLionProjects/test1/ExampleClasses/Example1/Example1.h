#ifndef TEST1_EXAMPLE1_H
#define TEST1_EXAMPLE1_H

///@brief Демонстрация:
/// - преобразование не константного параметра к константному через функцию
/// - изменяемые параметры в константной функции благодаря префику mutable
class Example1 {
public:
    explicit Example1();
    void intToPointerConstInt(const int elem) const;
private:
    int elem = 5;
    mutable int elem2 = 6;
};


#endif //TEST1_EXAMPLE1_H
