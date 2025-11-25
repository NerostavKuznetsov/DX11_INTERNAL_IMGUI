#define IMGUI_DEFINE_MATH_OPERATORS
#define WIN32_LEAN_AND_MEAN

// ➡️ Windos API
#include <Windows.h>
#include <iostream>
#include <cinttypes>
#include <string>

// ➡️ DIRECTX-SDKJUNE2010
#include <D3D11.h>
#include <DXGI.h>
#include <D3DX11tex.h>
#pragma comment(lib, "D3DX11.lib")

// ➡️ ImGui
#include "../External/ImGui/imgui.h"
#include "../External/ImGui/imgui_impl_dx11.h"
#include "../External/ImGui/imgui_impl_win32.h"
#include "../External/ImGui/imgui_internal.h"
#include "../External/ImGui/imgui_settings.h"

// Hooking kiero
#include "../External/kiero/kiero.h"

// ➡️ Cheat Menu
#include "Cheat/Menu/Menu.h"
#include "Cheat/Menu/Font.h"

// ➡️ Controller
#include "Cheat/Controller/Controller.h"

// ➡️ Config 
#include "Cheat/Config/Config.h"

// ➡️ Declaração 
// uintptr_t Client;



