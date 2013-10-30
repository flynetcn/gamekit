/*
 * =====================================================================================
 *
 *       Filename:  FileInputStream.h
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

#ifndef _FILE_INPUT_STREAM_H
#define _FILE_INPUT_STREAM_H

class File;

class FileInputStream : public InputStream{
protected:
    Handler<File> m_file;
public:
    FileInputStream(Handler<File> file);

    virtual ~FileInputStream();

    virtual int read(byte* buf,int size);

    virtual long available() ;

    virtual void close();
};


#endif  /*_FILE_INPUT_STREAM_H*/
