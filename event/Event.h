/*
 * =====================================================================================
 *
 *       Filename:  Event.h
 *
 *    Description:  事件对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 15时26分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _EVENT_H
#define _EVENT_H

class Event{
public:
    virtual int getType() = 0;

    virtual int getSource() = 0;

    virtual long getEventTime() = 0;
    
    virtual void* getData() = 0;
};

#endif  /*_EVENT_H*/
