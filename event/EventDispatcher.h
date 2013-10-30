/*
 * =====================================================================================
 *
 *       Filename:  EventDispatcher.h
 *
 *    Description:  事件分发器
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 16时39分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _EVENT_DISPATCHER_H
#define _EVENT_DISPATCHER_H

template < class E >
class EventDispatcher{
public:
    virtual void dispatchEvent(E& e);
};

#endif  /*_EVENT_DISPATCHER_H*/
