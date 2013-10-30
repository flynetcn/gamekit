/*
 * =====================================================================================
 *
 *       Filename:  Node.h
 *
 *    Description:  节点
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 18时48分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _NODE_H
#define _NODE_H

#include "common.h"

class Graphic;
class TouchEvent;

class Node{
protected:
    Node();

    /**
     * drawing methods
    **/
    virtual void transform(Graphic* graphic);

    virtual void draw(Graphic* graphic);

    virtual void drawChildren(Graphic* graphic);

    /**
     * touch event handle methods
    **/
    virtual void onTouchDown(TouchEvent& event);

    virtual void onTouchMove(TouchEvent& event);

    virtual void onTouchUp(TouchEvent& event);

    virtual void onClick(TouchEvent& event);

    /**
     * state handle methods
    **/
    virtual void onAttachedToWindow();

    virtual void onDetachedFromWindow();

public:
    virtual ~Node();

    virtual void visit(Graphic* graphic);

    void addChild(KKNode* child);

    void removeChild(KKNode* child);

    int getChildCount();

    KKNode* getChildAt(const int index);

    virtual bool dispatchTouchDown(TouchEvent& event);

    virtual bool dispatchTouchMove(TouchEvent& event);

    virtual bool dispatchTouchUp(TouchEvent& event);

    virtual void setPosition(const float x,const float y);

    virtual void setSize(const float width,const float height);

    virtual void setRotation(const float rotation);

    virtual void setTransparent(const float alpha);

    virtual void startAnimation(Handler<Animation> animation);
};


#endif  /*_NODE_H*/
