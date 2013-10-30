/*
 * =====================================================================================
 *
 *       Filename:  AudioPlayer.h
 *
 *    Description:  音频播放对象
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时37分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _AUDIO_PLAYER_H
#define _AUDIO_PLAYER_H

typedef enum{
    AUDIO_UNINIT,AUDIO_INIT,AUDIO_PLAYING,AUDIO_PAUSED,AUDIO_STOPED
};

class AudioPlayer{
private:
    AudioStatus m_status;
public:
    bool load(const char* path);

    void reset();

    void play();

    void stop();

    void pause();

    void rewind();

    void seek(int pos);

    int getPosition();
};


#endif  /*_AUDIO_PLAYER_H*/
