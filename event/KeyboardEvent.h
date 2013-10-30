/*
 * =====================================================================================
 *
 *       Filename:  KeyboardEvent.h
 *
 *    Description:  键盘事件
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 16时42分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _KEYBOARD_EVENT_H
#define _KEYBOARD_EVENT_H

#include "Event.h"

class KeyboardEvent : public Event{
private:
    int m_keycode;
public:
    virtual int getType();

    virtual int getSource();

    virtual int getKeycode();
};


#endif  /*_KEYBOARD_EVENT_H*/
