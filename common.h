/*
 * =====================================================================================
 *
 *       Filename:  common.h
 *
 *    Description:  公共对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时13分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>
#include <string>

typedef std::shared_ptr Handler

typedef unsigned char byte;

typedef struct{
    float x;
    float y; 
} Point ;

typedef struct{
    float width;
    float height; 
} Size ;

#endif  /*COMMON_H*/
