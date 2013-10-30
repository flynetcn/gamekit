/*
 * =====================================================================================
 *
 *       Filename:  FileSystem.h
 *
 *    Description:  抽象文件系统
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 19时21分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _FILE_SYSTEM_H
#define _FILE_SYSTEM_H

class File;

class FileSystem{
public:
    virtual File* open(const char* path) = 0;

    virtual void close(File* file) = 0;

    virtual int read(File* file,byte* buf,int size) = 0;

    virtual int write(File* file,byte* buf,int size) = 0;

    virtual bool exists(File* file) = 0;

    virtual bool create(File* file) = 0;

    virtual bool remove(File* file) = 0;
};


#endif  /*_FILE_SYSTEM_H*/
