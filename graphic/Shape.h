/*
 * =====================================================================================
 *
 *       Filename:  Shape.h
 *
 *    Description:  矢量绘制对象
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 19时20分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _SHAPE_H
#define _SHAPE_H

#include "Drawable.h"

class Shape : public Drawable{
public:
    virtual void draw(Graphics* graphics);
};

#endif  /*_SHAPE_H*/
