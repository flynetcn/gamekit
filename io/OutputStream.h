/*
 * =====================================================================================
 *
 *       Filename:  OutputStream.h
 *
 *    Description:  输出流
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 15时56分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _OUTPUT_STREAM_H
#define _OUTPUT_STREAM_H

#include "common.h"

class OutputStream{
public:
    virtual int write(byte* buf,int size) = 0 ;

    virtual void close() = 0;
};


#endif  /*_OUTPUT_STREAM_H*/
