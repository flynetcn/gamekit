/*
 * =====================================================================================
 *
 *       Filename:  Window.h
 *
 *    Description   窗口抽象 
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 18时29分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _WINDOW_H
#define _WINDOW_H

class TouchEvent;

class Window{
protected:
    Window();

public:
    virtual ~Window();

    virtual bool create(const char* title,const float width,const float height,const bool fullscreen=false) = 0;

    virtual void resize(const float width,const float height) = 0 ;

    virtual void show() = 0 ;

    virtual void hide() = 0 ;

    virtual void destroy() = 0 ;

    virtual void render(const float dt) = 0;

    virtual void dispatchTouchEvent(TouchEvent& event);

    static Window* sharedWindow();
};


#endif  /*_WINDOW_H*/
