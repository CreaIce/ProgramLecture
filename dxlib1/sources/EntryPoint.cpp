#include "EntryPoint.h"
#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    Init();

    if (DxLib_Init() == -1) // ＤＸライブラリ初期化処理
    {
        return -1;          // エラーが起きたら直ちに終了
    }

    Setting();

    while (!ProcessMessage() && Update());

    DxLib_End();            // ＤＸライブラリ使用の終了処理

    return 0;               // ソフトの終了 
}