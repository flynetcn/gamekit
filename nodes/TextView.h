/*
 * =====================================================================================
 *
 *       Filename:  TextView.h
 *
 *    Description:  文本
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时05分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _TEXT_VIEW_H
#define _TEXT_VIEW_H

#include "Node.h"
#include "Text.h"

class Font;

class TextView : public Node{
protected:
    Text m_text;
public:
    virtual void setText(const char* text);

    virtual void setTextSize(const int size);

    virtual void setTextColor(const float r,const float g,const float b);

    virtual void setTextFont(const Font& font);
};


#endif  /*_TEXT_VIEW_H*/
