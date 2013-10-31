/*
 * =====================================================================================
 *
 *       Filename:  ImageIO.h
 *
 *    Description:  图片IO接口
 *
 *        Version:  1.0
 *        Created:  2013年10月31日 17时39分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _IMAGE_I_O_H
#define _IMAGE_I_O_H

#include "common.h"

class Bitmap;

class ImageIO{
public:
    virtual Handler<Bitmap> read(const char* path) = 0;

    virtual Handler<Bitmap> decode(byte* data,int size) = 0;

    virtual void write(const Bitmap& bitmap) = 0;

};


#endif  /*_IMAGE_I_O_H*/
