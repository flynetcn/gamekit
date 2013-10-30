/*
 * =====================================================================================
 *
 *       Filename:  Array.h
 *
 *    Description:  数组对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时23分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _ARRAY_H
#define _ARRAY_H

#include <vector>

template < class T >
class Array{
public:
    void add(T value);

    void remove(T value);

    T get(int index);

    T first();

    T last();

    int size();
};

#endif  /*_ARRAY_H*/
