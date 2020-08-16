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

        deltaTime; // Œx‰ñ”ğ

        if (CheckHitKey(KEY_INPUT_ESCAPE))
        {
            SceneManagerTransition(Scene::kQuit);
        }

        ClearDrawScreen();
        // •`‰æˆ—‚±‚±‚©‚ç

        // •`‰æˆ—‚±‚±‚Ü‚Å
        ScreenFlip();
    }

}
