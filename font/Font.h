/*
 * =====================================================================================
 *
 *       Filename:  Font.h
 *
 *    Description:  字体对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时16分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _FONT_H
#define _FONT_H

class Font{
public:
    virtual bool init(const int size) = 0;

    static Handler<Font> create(const char* family,const int size);
};


#endif  /*_FONT_H*/
