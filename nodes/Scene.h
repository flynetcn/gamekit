/*
 * =====================================================================================
 *
 *       Filename:  Scene.h
 *
 *    Description:  场景
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 12时21分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _SCENE_H
#define _SCENE_H

#include "Node.h"

class Scene : public Node {
public:
    string getName();

    bool loadFromXml();
};


#endif  /*_SCENE_H*/
