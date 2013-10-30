/*
 * =====================================================================================
 *
 *       Filename:  Graphics.h
 *
 *    Description:  图形渲染引擎接口
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 19时08分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _GRAPHICS_H
#define _GRAPHICS_H

class Drawable;
class Text;
class Paint;

class Graphics{
protected:
    Graphics();

public:
    virtual ~Graphics();
    
    virtual void save() = 0;

    virtual void restore() = 0;

    virtual void translate(const float x,const float y) = 0;

    virtual void scale(const float scaleX,const float scaleY) = 0;

    virtual void rotate(const float rotation) = 0;

    virtual void draw(Drawable* drawable) = 0;

    virtual void drawRect(const float x,const float y,const float width,const float height) = 0;

    virtual void drawLine(const float x1,const float y1,const float x2,const float y2) = 0;

    virtual void drawText(Text* text,const float x,const float y) = 0;

    virtual void fillRect(const float x,const float y,const float width,const float height) = 0;

    virtual void fillLine(const float x1,const float y1,const float x2,const float y2) = 0;

    virtual void setPaint(const Paint& paint) = 0;

    virtual const Paint& getPaint() = 0;
};


#endif  /*_GRAPHICS_H*/
