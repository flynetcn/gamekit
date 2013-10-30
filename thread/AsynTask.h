/*
 * =====================================================================================
 *
 *       Filename:  AsynTask.h
 *
 *    Description:  异步任务
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时59分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _ASYN_TASK_H
#define _ASYN_TASK_H

class AsyncTask{
private:
    void doPreExecute();

    void doPostExecute();

protected:
    virtual void onPreExecute();

    virtual void doInBackground() = 0;

    virtual void onPostExecute();
public:
    void start();
};


#endif  /*_ASYN_TASK_H*/
