#include "reverse.hpp"


bool _arrays_equality(int* array1, int* array2, const size_t& len)
{
    // Функция для проверки равенства массивов
    
    int* pa1 = array1;
    int* pa2 = array2;

    size_t it{0};

    while (it < len)
    {

        if (pa1[it] == pa2[it]) ++it;

        else return false;
    }

    return true;
}

void Reverse(int* array, const size_t& len) 
{
    int* _array = new int[len];

    for (size_t i{0}; i < len; ++i)
        _array[i] = array[len - i - 1];

    for (size_t i{0}; i < len; ++i)
        array[i] = _array[i];
    
    delete[] _array;

}

int* return_re_array(int* array, const size_t& len)
{
    // Дополнительную функцию для того, чтобы написать тесты
    // для функции Reverse, которая возвращает void

    Reverse(array, len);

    return array;
}