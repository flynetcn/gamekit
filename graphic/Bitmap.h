/*
 * =====================================================================================
 *
 *       Filename:  Bitmap.h
 *
 *    Description:  可绘制位图
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 19时19分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _BITMAP_H
#define _BITMAP_H

#include "Drawable.h"

typedef enum{
    BITMAP_RGBA32,BITMAP_RGB565,BITMAP_RGB12,BITMAP_GRAY16,BITMAP_GRAY8
}BitmapFormat;

class Bitmap : public Drawable{
protected:
    Bitmap();

public:
    virtual ~Bitmap();

    virtual void draw(Graphics* graphics);

    virtual void init(unsigned char* data,int size,int width,int height,const BitmapFormat format) = 0;
};


#endif  /*_BITMAP_H*/
