/*
 * =====================================================================================
 *
 *       Filename:  FileOutputStream.h
 *
 *    Description:  文件IO流
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 16时01分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _FILE_OUTPUT_STREAM_H
#define _FILE_OUTPUT_STREAM_H

class File;

class FileOutputStream : public OutputStream{
protected:
    Handler<File> m_file;
public:
    FileOutputStream(Handler<File> file);

    virtual ~FileOutputStream();

    virtual int write(byte* buf,int size);

    virtual void close();
};


#endif  /*_FILE_OUTPUT_STREAM_H*/
