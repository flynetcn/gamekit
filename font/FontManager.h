/*
 * =====================================================================================
 *
 *       Filename:  FontManager.h
 *
 *    Description:  字体管理
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时09分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _FONT_MANAGER_H
#define _FONT_MANAGER_H

#include "Array.h"

class FontFamily{
public:
    virtual const string& getFamilyName();
    
    virtual bool isSystem();

    virtual void render(int charactor,int size) = 0 ;
};

class FontManager{
protected:
    FontManager();
public:
    virtual ~FontManager();

    virtual Array<Handler<FontFamily>> listSystemFontFamily() = 0;

    virtual Handler<FontFamily> loadFontFamily(const char* path) = 0;

};

#endif  /*_FONT_MANAGER_H*/
