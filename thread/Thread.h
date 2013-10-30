/*
 * =====================================================================================
 *
 *       Filename:  Thread.h
 *
 *    Description:  线程对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时51分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _THREAD_H
#define _THREAD_H

typedef function<void(Thread*)> ThreadFunction;

class Thread{
private:
    ThreadFunction m_function;
public:
    Thread();
    virtual ~Thread();

    bool start(ThreadFunction function = NULL);

    bool interrupt();

    void join();

    virtual void run() ; 

    static Handler<Thread> currentThread();
};


#endif  /*_THREAD_H*/
