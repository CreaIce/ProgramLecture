#include "EntryPoint.h"

#include "DxLib.h"
#include "scenes/SceneManager.h"

#include "scenes/TestScene.h"

// �����ݒ�
void Setting(void)
{
    SceneManagerTransition(Scene::kTest);
}

// ���C�����[�v
// deltaTime �O�t���[������̌o�ߎ���
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
