#include "GameRoot.h"

DECLARE_SINGLETON_MEMBER(GameRoot);

void GameRoot::init()
{
    // 凡是要预加载的场景都可以在这个函数里创建
    m_pSceneStart = SceneStart::create();
    CC_SAFE_RETAIN(m_pSceneStart);
}

void GameRoot::unInit()
{

}
