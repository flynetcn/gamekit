/*
 * =====================================================================================
 *
 *       Filename:  Rect.h
 *
 *    Description:  矩形绘制对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 10时54分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _RECT_H
#define _RECT_H

#include "Shape.h"

class Rect : public Shape{
public:
    virtual void draw(Graphics* grapics);

    virtual bool init(const float x,const float y,const float width,const float height);
};


#endif  /*_RECT_H*/
