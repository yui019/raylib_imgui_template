#include "raylib.h"
#include "imgui.h"
#include "rlImGui.h"

int main(int argc, char *argv[]) {
	const int SCREEN_WIDTH  = 1280;
	const int SCREEN_HEIGHT = 800;

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raylib + Dear ImGui");
	rlImGuiSetup(true);

	bool demo_window_open = true;
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);

		rlImGuiBegin();

		ImGui::ShowDemoWindow(&demo_window_open);

		rlImGuiEnd();

		EndDrawing();
	}

	rlImGuiShutdown();
	CloseWindow();

	return 0;
}
