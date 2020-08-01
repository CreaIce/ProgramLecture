#include "EntryPoint.h"

#include "DxLib.h"
#include "scenes/SceneManager.h"

#include "scenes/TestScene.h"

// 初期設定
void Setting(void)
{
    SceneManagerTransition(Scene::kTest);
}

// メインループ
// deltaTime 前フレームからの経過時間
int Update(void)
{
    switch (gNowScene)
    {
    case Scene::kTest:
        TestScene();
        break;

    case Scene::kQuit:
        return FALSE;

    default:
        return FALSE;
    }

    return TRUE;
}
