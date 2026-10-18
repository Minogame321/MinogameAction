#pragma once

#include <functional>
#include <mutex>
#include <vector>
#include "Containers/Array.h"

#define UI_CLOSE_MANAGER()       UICloseManager::GetInstance()

class UBaseUIWidget;

class UICloseManager
{
public:
    // シングルトンインスタンスを取得
    static UICloseManager& GetInstance()
    {
        static UICloseManager instance;
        return instance;
    }

    // コピー・ムーブ禁止
    UICloseManager(const UICloseManager&) = delete;
    UICloseManager& operator=(const UICloseManager&) = delete;
    UICloseManager(UICloseManager&&) = delete;
    UICloseManager& operator=(UICloseManager&&) = delete;
    // UIを登録
    void AddUI(UBaseUIWidget* Widget);
    void CloseUI();

private:
    UICloseManager() = default;
    ~UICloseManager() = default;


private:
    TArray<UBaseUIWidget*> UIStack;
};