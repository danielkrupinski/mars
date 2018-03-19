#ifndef ATGUI_H
#define ATGUI_H

#include <list>
#include "../../lib/ImGUI/imgui.h"
#include "../../lib/ImGUI/imgui_internal.h"
#include "../../lib/ImGUI/imgui_impl_sdl.h"
#include "../settings.h"
#include "../Hacks/hacks.h"
#include "../Utils/skins.h"
#include "imgui.h"
#include "Windows/skinmodelchanger.h"
#include "Windows/configs.h"
#include "Windows/playerlist.h"
#include "Windows/colors.h"
#include "Windows/main.h"
#include "Tabs/aimbottab.h"
#include "Tabs/triggerbottab.h"
#include "Tabs/visualstab.h"
#include "Tabs/hvhtab.h"
#include "Tabs/misctab.h"
#include "Tabs/modelstab.h"
#include "Tabs/skinstab.h"
#include "../Utils/xorstring.h"
#include "../Fuzion.h"

namespace UI {
    extern bool isVisible;

    void SetVisible(bool);
    void SwapWindow();
    void SetupColors();
    void SetupWindows();
    bool ColorPicker(float*, bool);
    bool ColorPicker3(float[3]);
    bool ColorPicker4(float[4]);
    void KeyBindButton(ButtonCode_t*);
    void UpdateWeaponSettings();
    void ReloadWeaponSettings();
}


inline void SetTooltip(const char* text)
{
    if (ImGui::IsItemHovered())
    ImGui::SetTooltip("%s", text);
}

#endif // ATGUI_H
