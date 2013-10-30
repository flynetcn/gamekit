/*
 * =====================================================================================
 *
 *       Filename:  Paint.h
 *
 *    Description:  画笔对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 10时32分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _PAINT_H
#define _PAINT_H

class Paint{
public:
    Paint();
    virtual ~Paint();

    virtual void setColor(const float red,const float green,const float blue);

    virtual void setAlpha(const float alpha);

    virtual void setLineWidth(const float width);

    virtual void setFontFamily(const char* fontName);

    virtual void setFontSize(const int fontSize);

    virtual void setBlendFunc();
};


#endif  /*_PAINT_H*/
