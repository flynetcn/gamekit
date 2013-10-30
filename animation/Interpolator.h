/*
 * =====================================================================================
 *
 *       Filename:  Interpolator.h
 *
 *    Description:  动画拦截器
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 14时52分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _INTERPOLATOR_H
#define _INTERPOLATOR_H

typedef function<float(float)> InterpolatorFunction;

class Interpolator{
public:
     virtual float  getInterpolation(const float & time ) = 0;
};

class CustomInterpolator : public Interpolator{
protected:
    InterpolatorFunction m_function;
public:
    virtual float getInterpolation(const float & time);
};

class AccelerateInterpolator : public Interpolator{
};

class DecelerateInterpolator : public Interpolator{
};

class BounceInterpolator : public Interpolator{
};

#endif  /*_INTERPOLATOR_H*/

