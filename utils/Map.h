/*
 * =====================================================================================
 *
 *       Filename:  Map.h
 *
 *    Description:  字典对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时29分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _MAP_H
#define _MAP_H

#include <unordered_map>

template < class K , class V >
class Map {
public:
    V put(const K & key, V value);

    V get(const K & key);

    V remove(const K & key);

    bool contains(const K & key);

    int size();
};

#endif  /*_MAP_H*/
