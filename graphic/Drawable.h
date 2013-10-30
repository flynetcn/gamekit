/*
 * =====================================================================================
 *
 *       Filename:  Drawable.h
 *
 *    Description:  可绘制对象
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 19时17分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _DRAWABLE_H
#define _DRAWABLE_H

class Graphics;

class Drawable{
public:
    virtual ~Drawable();

    virtual void draw(Graphics* graphics) = 0;
};


#endif  /*_DRAWABLE_H*/
