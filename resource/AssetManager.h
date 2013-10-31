/*
 * =====================================================================================
 *
 *       Filename:  AssetManager.h
 *
 *    Description:  资源管理器
 *
 *        Version:  1.0
 *        Created:  2013年10月31日 17时30分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _ASSET_MANAGER_H
#define _ASSET_MANAGER_H

class AssetManager{
public:
    virtual Handler<InputStream> open(const char* path) = 0;

    virtual Array<File> list(const char* path = NULL) = 0;

    virtual bool exists(const char* path) = 0;

    static AssetManager* sharedManager();
};


#endif  /*_ASSET_MANAGER_H*/
