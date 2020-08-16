#include "SceneManager.h"

Scene gNowScene = Scene::kNone;
Scene gBeforeScene = Scene::kNone;

void SceneManagerTransition(Scene newScene)
{
    gBeforeScene = gNowScene;
    gNowScene = newScene;
}

void SceneManagerQuitGame(void)
{
    SceneManagerTransition(kQuit);
}

Scene SceneManagerGetNowScene(void)
{
    return gNowScene;
}

Scene SceneManagerGetBeforeScene(void)
{
    return gBeforeScene;
}