/*
 * =====================================================================================
 *
 *       Filename:  Animation.h
 *
 *    Description:  动画引擎
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 12时27分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _ANIMATION_H
#define _ANIMATION_H

#include "common.h"
#include "Interpolator.h"

typedef function<void(Animation*)> CompleteFunction;
typedef function<void(Animation*,float)> AnimationFunction;

class Node;
class Drawable;

class Animation{
protected:
    float m_time;
    float m_startOffset;
    float m_duration;
    Handler<Node> m_target;
protected:
    CompleteFunction m_completeFunction;
    Handler<Interpolator> m_interpolator;
protected:
    virtual void step(const float time) = 0;
public:
    virtual bool init(const float duration,const float delay);

    void start(Handler<Node> target);

    void cancel();

    virtual void tick(const float dt);

    virtual void setCompleteFunction(CompleteFunction func);

    virtual void setInterpolatorFunction(InterpolatorFunction func);

    virtual void setInterpolator(Handler<Interpolator> interpolator);

    template < class T > static Handler<T> create(){
        Handler<T> animation(new T());
        return animation;
    }; 
};

class CustomAnimation: public Animation{
protected:
    AnimationFunction m_stepFunction;
protected:
    virtual bool init(const float duration,const float delay,AnimationFunction func = NULL);

    virtual void step(const float time);

    friend class Animation;
};

template < class V >
class TweenAnimation : public Animation{
protected:
    V m_startValue;
    V m_destValue;
public:
    virtual bool init(const float duration,const float delay,const V destValue);

    virtual bool init(const float duration,const float delay,const V startValue,const V destValue);

    virtual void step(const float time);
};

class TranslateAnimation: public TweenAnimation < Point >{
private:
    friend class Animation;
};

class ScaleAnimation: public Animation < Size >{
private:
    friend class Animation;
};

class RotateAnimation: public Animation < float >{
private:
    friend class Animation;
};

class AlphaAnimation: public Animation < float >{
private:
    friend class Animation;
};

class FrameAnimation: public Animation{
private:
    class AnimationFrame{
    public:
        float duration;
        Handler<Drawable> drawable;
    };
private:
    friend class Animation;
    Array<AnimationFrame> m_frames;
protected:
    virtual void step(const float time);

    virtual Handler<Drawable> getCurrent();

    virtual void addFrame(Handler<Drawable> drawable,const float duration);
};

class AnimationSet: public Animation{
protected:
    Array<Handler<Animation>> m_animations;
protected:
    virtual void step(const float time);
    
    virtual void add(Handler<Animation> animation);
};

class SequenceAnimation: public AnimationSet{
protected:
    virtual void tick(const float dt);
};

class SpawnAnimation: public AnimationSet{
protected:
    virtual void tick(const float dt);
};

#endif  /*_ANIMATION_H*/
