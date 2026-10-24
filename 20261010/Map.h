#pragma once
#include "Config.h"
#include<vector>
using namespace std;

class Map
{
private:
	//ファイル読み込み
	
	/// <summary>
	/// ロードマップ
	/// </summary>
	/// <param name="filepath">マップCSVファイルパス</param>
	/// <param name="mapData">マップチップイメージ</param>
	/// <returns>描画判定</returns>
	bool LoadMap(const char* filepath, vector<vector<int>>& mapData);

	/// <summary>
	/// 描画レイヤー
	/// </summary>
	/// <param name="mapData">マップチップイメージ</param>
	void DrawLayer(const vector<vector<int>>& mapData)const;

	/// <summary>
	/// 描画フラグ
	/// </summary>
	/// <param name="mapX">X座標</param>
	/// <param name="mapY">Y座標</param>
	/// <returns>描画フラグ</returns>
	bool IsValidMapPosition(int mapX, int mapY);

	int chipImages[Config::MAP_CHIP_IMAGE_COUNT];

	//マップの内容
	vector<vector<int>> backMap;
	vector<vector<int>> baseMap;
	vector<vector<int>> nearMap;

	int mapXNum;
	int mapYNum;
	bool isInitialized;

public:
	//コンストラクタ
	Map();
	//デストラクタ
	~Map();

	//画像とCSVを読み込み

	/// <summary>
	/// 画像読み込み初期化 
	/// </summary>
	/// <returns>初期化内容</returns>
	bool Init();

	//マップを奥から手前の順に描画

	/// <summary>
	/// 描画
	/// </summary>
	void Draw()const;

	//Dxlib終了前に呼び出して画像などを解放
	void Finalize();

};

