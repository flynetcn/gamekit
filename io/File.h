/*
 * =====================================================================================
 *
 *       Filename:  File.h
 *
 *    Description:  文件对象
 *
 *        Version:  1.0
 *        Created:  2013年10月29日 19时25分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _FILE_H
#define _FILE_H

#include <string>

typedef enum{
    FILE_TYPE_NORMAL,FILE_TYPE_DIRECTORY,FILE_TYPE_LINK,FILE_TYPE_UNKNOWN   
}FileType;

class File{
private:
    FileType m_type;
public:
    File(const char* path);

    File(File* parent,const char* path);

    std::string getName();

    File* getParent();

    std::string getAbsPath();

    long long getLastModified();

    bool isDirectory();

    bool mkdir();

    bool mkdirs();

    bool create();    

    bool remove();

    Array<Handler<File>> listFiles();
};


#endif  /*_FILE_H*/
