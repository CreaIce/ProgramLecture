#include "EntryPoint.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    if (DxLib_Init() == -1) // �c�w���C�u��������������
    {
        return -1;          // �G���[���N�����璼���ɏI��
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

    DxLib_End();            // �c�w���C�u�����g�p�̏I������

    return 0;               // �\�t�g�̏I�� 
}