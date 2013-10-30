/*
 * =====================================================================================
 *
 *       Filename:  AudioEngine.h
 *
 *    Description:  音频引擎
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 11时47分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _AUDIO_ENGINE_H
#define _AUDIO_ENGINE_H

#include "Array.h"
#include "AudioPlayer.h"

class AudioEngine{
private:
    AudioPlayer m_music;
    Array<Handler<AudioPlayer>> m_effects;
public:
    void preloadMusic(const char* path);

    void preloadEffect(const char* path);

    void playMusic(const char* path);

    void stopMusic(const char* path);

    void playEffect(const char* path);

    void stopEffect(const char* path);

    static AudioEngine* sharedEngine();
};


#endif  /*_AUDIO_ENGINE_H*/
