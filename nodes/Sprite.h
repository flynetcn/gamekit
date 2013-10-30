/*
 * =====================================================================================
 *
 *       Filename:  Sprite.h
 *
 *    Description:  精灵节点
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时04分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _SPRITE_H
#define _SPRITE_H

#include "Sprite.h"

class Sprite : public Node{
public:
     
    void setImage(const char* image);

    void setHotImage(const char* image);

    Handler<Animation> animate(const float duration,const char* frame,...);
};

#endif  /*_SPRITE_H*/
