#ifndef __SCENE_START_H__
#define __SCENE_START_H__

#include "cocos2d.h"
#include "../util/Macro.h"
using namespace cocos2d;

class SceneStart : public CCScene
{
public :
    SW_CLASS_CREATE_FUNC(SceneStart)

    bool init();
    void unInit();

private :
    SceneStart();
    ~SceneStart();
};

#endif //__SCENE_START_H__
