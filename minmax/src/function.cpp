#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*
usei essa solução a partir do que você enviou para a lista 2, depois de ajustar a implementação ao header, ainda falharam
alguns casos de teste.
Vou considerar 50% para essa solução
*/
std::pair<int, int> min_max (int v[], std::size_t n){
    std::pair<int, int> p;
    int minIdx = 0;
    int maxIdx = 0;
    for (std::size_t i=0; i<n; i++){
        if (v[maxIdx] < v[i])
            maxIdx = i;
        if (v[minIdx] > v[i])
            minIdx = i;
    }
    p.first = minIdx;
    p.second = maxIdx;
    return p;
}
