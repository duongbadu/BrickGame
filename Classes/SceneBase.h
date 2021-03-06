#pragma once
#include "BGGlobal.h"
#include "GameScene.h"
#include "GeneralManager.h"

class CSceneBase
{
public:
	CSceneBase(CGameScene* pGameScene);
	~CSceneBase();

	//初始化
	virtual void Init();

	//更新
	virtual void Play(float dt);

	//提供给每次更新单个Brick游戏（当前只有游戏结束）使用，获取当前改变的Brick行列索引
	virtual void GetCurPos(int& iRowIndex, int& iColIndex);

	//获取当前Brick状态
	virtual bool GetBrickState(int iRowIndex, int iColIndex);

	//获取小方块序列中的方块状态
	virtual bool GetSmallBrickState(int iRowIndex, int iColIndex);

	//获取游戏类型
	virtual SCENE_INDEX GetSceneType();

	//左按下
	virtual void OnLeftBtnPressed();

	//左释放
	virtual void OnLeftBtnReleased();

	//右按下
	virtual void OnRightBtnPressed();

	//右释放
	virtual void OnRightBtnReleased();

	//上按下
	virtual void OnUpBtnPressed();

	//上释放
	virtual void OnUpBtnReleased();

	//下按下
	virtual void OnDownBtnPressed();

	//下释放
	virtual void OnDownBtnReleased();

	//Fire按下
	virtual void OnFireBtnPressed();

	//Fire释放
	virtual void OnFireBtnReleased();

	//开始
	virtual void OnStart();

	//游戏状态
	virtual void SaveGameData();

protected:
	CGameScene* m_pGameScene;
};

