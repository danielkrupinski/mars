#ifndef GLHOOK_H
#define GLHOOK_H

#include "interfaces.h"
#include "Hacks/hacks.h"
#include "shortcuts.h"
#include "../lib/ImGUI/imgui.h"
#include "../lib/ImGUI/imgui_impl_sdl.h"
#include "../lib/ImGUI/imgui_internal.h"
#include "../lib/ImGUI/fonts/KaiGenGothicCNRegular.h"
#include "ATGUI/SegoeUI.h"

typedef void (*SDL_GL_SwapWindow_t) (SDL_Window*);
typedef int (*SDL_PollEvent_t) (SDL_Event*);

namespace SDL2 {
    void SwapWindow(SDL_Window*);
    void UnhookWindow();
    int PollEvent(SDL_Event*);
    void UnhookPollEvent();
}

#endif // GLHOOK_H
