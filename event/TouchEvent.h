/*
 * =====================================================================================
 *
 *       Filename:  TouchEvent.h
 *
 *    Description:  触摸事件
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 16时34分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _TOUCH_EVENT_H
#define _TOUCH_EVENT_H

#include "common.h"

class Node;

class TouchEvent : public Event{
protected:
    Handler<Node> m_source;
public:
    virtual Handler<Node> getSource();
    
    virtual int getType();

    virtual const Point& getPoint();

};



#endif  /*_TOUCH_EVENT_H*/
