/*
 * =====================================================================================
 *
 *       Filename:  LocaleManager.h
 *
 *    Description:  本地化组件
 *
 *        Version:  1.0
 *        Created:  2013年10月31日 17时46分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _LOCALE_MANAGER_H
#define _LOCALE_MANAGER_H

typedef enum{
    EN_US,ZH_CN,ZH_TW
}LocaleLanguage;

class LocaleManager{
public:
    virtual LocaleLanguage getLocale() = 0;

    virtual std::string getLocaleName() = 0;

    virtual std::string getString(const char* key) = 0;
};


#endif  /*_LOCALE_MANAGER_H*/
