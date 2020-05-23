#pragma once

#ifdef SAB_PLATFORM_WINDOWS

extern saber::Application* saber::create_application();

int main(int argc, char** argv) {
	saber::Log::init();
	SAB_CORE_INFO("Saber starts!");
	auto app = saber::create_application();
	app->run();
	delete app;
}

#endif
