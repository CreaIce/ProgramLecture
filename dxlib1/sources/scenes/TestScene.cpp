#include "TestScene.h"
#include "DxLib.h"

#include "SceneManager.h"

void TestScene(void)
{
    int beforeCount = GetNowCount();

    while (!ProcessMessage() && SceneManagerGetNowScene() == Scene::kTest)
    {
        int nowCount = GetNowCount();
        float deltaTime = (nowCount - beforeCount) / 1000.0f;
        beforeCount = nowCount;

        deltaTime; // 警告回避

        if (CheckHitKey(KEY_INPUT_ESCAPE))
        {
            SceneManagerTransition(Scene::kQuit);
        }

        ClearDrawScreen();
        // 描画処理ここから

        // 描画処理ここまで
        ScreenFlip();
    }

}
