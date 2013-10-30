/*
 * =====================================================================================
 *
 *       Filename:  RoundRect.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 10时56分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _ROUND_RECT_H
#define _ROUND_RECT_H

#include "Shape.h"

class RoundRect : public Shape{
public:
    virtual void draw(Graphics* grapics);

    virtual bool init(const float x,const float y,const float width,const float height,const float corner);
};


#endif  /*_ROUND_RECT_H*/
