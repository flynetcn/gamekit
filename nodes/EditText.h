/*
 * =====================================================================================
 *
 *       Filename:  EditText.h
 *
 *    Description:  文本输入框
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 12时15分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _EDIT_TEXT_H
#define _EDIT_TEXT_H

class EditText : public TextView{
protected:
    bool m_editable;
public:

    static Handler<EditText> create(const string& text,const char* fontName,const int fontSize);
};


#endif  /*_EDIT_TEXT_H*/
