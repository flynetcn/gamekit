/*
 * =====================================================================================
 *
 *       Filename:  Application.h
 *
 *    Description:  应用抽象接口 
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 18时24分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _APPLICATION_H
#define _APPLICATION_H

class Window;

class Application{
protected:
    Application();

public:
    virtual ~Application();

    virtual bool init() = 0 ;

    virtual int run() = 0 ;

    virtual void enterForeground() = 0;

    virtual void enterBackground() = 0;

    virtual void exit() = 0 ;

    virtual Handler<Window> currentWindow();

    static Application* sharedApplication();
};


#endif  /*_APPLICATION_H*/
