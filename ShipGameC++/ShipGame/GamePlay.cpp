#include "GamePlay.h"
#include "GraphFactory.h"
#include "Window.h"

//	初期化
void GamePlay::Initialize()
{
	//各オブジェクトを初期化
	_player.Start();
	
}

//	更新
void GamePlay::Update()
{
	//更新処理を実行
	_player.Update();
	
	//描画処理を実行
	
	_player.Render();

#ifdef _DEBUG_
	
#endif // _DEBUG_


}

//	解放
void GamePlay::Release()
{
}
