#include "EntryPoint.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    if (DxLib_Init() == -1) // ＤＸライブラリ初期化処理
    {
        return -1;          // エラーが起きたら直ちに終了
    }

    Setting();

    int beforeCount = GetNowCount();

    while (!ProcessMessage() && !CheckHitKey(KEY_INPUT_ESCAPE))
    {
        int nowCount = GetNowCount();
        float deltaTime = (nowCount - beforeCount) / 1000.0f;
        beforeCount = nowCount;

        Loop(deltaTime);

        ClearDrawScreen();

        Draw();

        ScreenFlip();
    }

    DxLib_End();            // ＤＸライブラリ使用の終了処理

    return 0;               // ソフトの終了 
}