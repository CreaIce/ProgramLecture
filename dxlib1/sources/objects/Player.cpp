#include "DxLib.h"
#include "Player.h"

// ƒvƒƒOƒ‰ƒ€‚Í WinMain ‚©‚çn‚Ü‚è‚Ü‚·
void PlayerDraw(int x, int y)
{
    DrawCircle(x, y, 10, GetColor(200, 30, 100), true);

}

void PlayerMove(int* x,int* y)
{
    if (* x < 625)
    {
        if (CheckHitKey(KEY_INPUT_D) == 1 ||
            CheckHitKey(KEY_INPUT_RIGHT) == 1)
        {
            *x += 5;
        }
    }
    if (10 < * x)
    {
        if (CheckHitKey(KEY_INPUT_A) == 1 ||
            CheckHitKey(KEY_INPUT_LEFT) == 1)
        {
            *x -= 5;
        }
    }
    if (10 < * y)
    {
        if (CheckHitKey(KEY_INPUT_W) == 1 ||
            CheckHitKey(KEY_INPUT_UP) == 1)
        {
            *y -= 5;
        }
    }
    if (* y < 465)
    {
        if (CheckHitKey(KEY_INPUT_S) == 1 ||
            CheckHitKey(KEY_INPUT_DOWN) == 1)
        {
            *y += 5;
        }
    }
    DrawFormatString(0, 0, 0xffffff, "x:%d,y:%d", *x, *y);
}