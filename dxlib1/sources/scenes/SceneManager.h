#pragma once

enum Scene
{
    kNone,
    kTest,
    kQuit
};

extern Scene gNowScene, gBeforeScene;

extern void SceneManagerTransition(Scene newScene);
extern void SceneManagerQuitGame(void);
extern Scene SceneManagerGetNowScene(void);
extern Scene SceneManagerGetBeforeScene(void);
