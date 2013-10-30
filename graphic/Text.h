/*
 * =====================================================================================
 *
 *       Filename:  Shape.h
 *
 *    Description:  文本绘制对象
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

#ifndef _TEXT_H
#define _TEXT_H

#include "Drawable.h"

class Text : public Drawable{
protected:
    Text();
public:
    virtual ~Text();

    virtual void draw(Graphics* graphics);

    virtual bool init(const char* value) = 0;
};

#endif  /*_TEXT_H*/
