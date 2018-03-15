#ifndef DRAW_H
#define DRAW_H

#include "../interfaces.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <wchar.h>
#include "../fonts.h"
#include "../../lib/ImGUI/imgui.h"

enum ImFontFlags {
    ImFontFlags_None = 1 << 1,
    ImFontFlags_Outline = 1 << 2,
    ImFontFlags_Shadow = 1 << 3
};

namespace Draw {
    void Circle(Vector2D, float, float, Color);
    void OutlinedCircle(int, int, int, int, Color);
    void FilledCircle(Vector2D, float, float, Color);
    void Circle3D(Vector, float, float, Color);
    void FilledRectangle(int, int, int, int, Color);
    void FilledRectangle(Vector2D, Vector2D, Color);
    void Rectangle(int, int, int, int, Color);
    void Rectangle(Vector2D, Vector2D, Color);
    void Line(int, int, int, int, Color);
    void Line(Vector2D, Vector2D, Color);
    void PolyLine(int*, int*, int, Color);
    void PolyLine(Vertex_t*, int, Color);
    void TexturedPolygon(int, Vertex_t*, Color);
    void TextW(int, int, const wchar_t*, HFont, Color);
    void TextW(Vector2D, const wchar_t*, HFont, Color);
    void Text(int, int, const char*, HFont, Color);
    void Text(Vector2D, const char*, HFont, Color);
    void GetTextWSize(const wchar_t*, HFont, int&, int&);
    void GetTextSize(const char*, HFont, int&, int&);
    Vector2D GetTextWSize(const wchar_t*, HFont);
    Vector2D GetTextSize(const char*, HFont);
    HFont CreateFont(const char*, int, int = (int)FontFlags::FONTFLAG_DROPSHADOW);

    // ImGui
    void ImStart();
    void ImCircle(ImVec2, ImColor, float, int = 12, float = 1.0f);
    void ImCircleFilled(ImVec2, ImColor, float, int);
    void ImLine(ImVec2, ImVec2, ImColor, float = 1.0f);
    void ImRect(ImVec2, ImVec2, ImColor, float = 0.0f, int = ~0, float = 1.0f);
    void ImRect(int, int, int, int, Color, float = 0.0f, int = ~0, float = 1.0f);
    void ImRect(ImVec2, ImVec2, Color, float = 0.0f, int = ~0, float = 1.0f);
    void ImText(ImVec2, ImColor, const char*, const char* = nullptr, float = 0.0f, const ImVec4* = nullptr, ImFontFlags = ImFontFlags_None);
    void ImEnd();
}

#endif // DRAW_H
