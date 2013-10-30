/*
 * =====================================================================================
 *
 *       Filename:  GameEngine.h
 *
 *    Description:  游戏引擎
 *
 *        Version:  1.0
 *        Created:  2013年10月30日 15时33分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  caoshun (fly_net_cn), caoshun001@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef _GAME_ENGINE_H
#define _GAME_ENGINE_H

class Scene;
class Window;

typedef enum{
    GAME_UNINIT,GAME_START,GAME_PAUSED,GAME_STOPED
}GameEngineStatus;

class GameEngine{
protected:
    GameEngineStatus m_status;
public:
    virtual void start();

    virtual void update();

    virtual void render(Window& window);

    bool isRunning();

    Handler<Scene> currentScene();

    static GameEngine* sharedEngine();
};


#endif  /*_GAME_ENGINE_H*/
