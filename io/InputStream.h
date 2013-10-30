/*
 * =====================================================================================
 *
 *       Filename:  InputStream.h
 *
 *    Description:  输入流
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

#ifndef _INPUT_STREAM_H
#define _INPUT_STREAM_H

#include "common.h"

class InputStream{
public:
    virtual int read(byte* buf,int size) = 0 ;

    virtual long available() = 0;

    virtual void close() = 0;
};


#endif  /*_INPUT_STREAM_H*/
