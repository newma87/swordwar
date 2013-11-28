#ifndef _GAME_ROOT_H_
#define _GAME_ROOT_H_

#include "cocos2d.h"
#include "util/Singleton.h"

#include "scene/SceneStart.h"

using namespace cocos2d;

class GameRoot : public Singleton<GameRoot>
{
public :
    void init();
    void unInit();

    CC_SYNTHESIZE_RETAIN(SceneStart*, m_pSceneStart, SceneStart)
};

#define g_pGameRoot GameRoot::instance()

#endif
