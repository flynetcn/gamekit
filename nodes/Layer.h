/*
 * =====================================================================================
 *
 *       Filename:  Layer.h
 *
 *    Description:  图片节点
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 10时59分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _LAYER_H
#define _LAYER_H

#include "Node.h"

class Layer : public Node{
public:
    void setBackground(Handler<Drawable> drawable);    
};


#endif  /*_LAYER_H*/
