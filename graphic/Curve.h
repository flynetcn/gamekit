/*
 * =====================================================================================
 *
 *       Filename:  Curve.h
 *
 *    Description:  弧形对象 
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 10时49分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _CURVE_H
#define _CURVE_H

#include "Shape.h"

class Curve : public Shape{
public:
    virtual void draw(Graphics* graphics);

    virtual bool init(const float x,const float y,const float radius,const float start,const float end);
};


#endif  /*_CURVE_H*/
