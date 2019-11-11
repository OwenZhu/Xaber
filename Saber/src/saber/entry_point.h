#pragma once

#ifdef SAB_PLATFORM_WINDOWS

extern saber::Application* saber::create_application();

int main(int argc, char** argv) {
	printf("Saber starts!");
	auto app = saber::create_application();
	app->run();
	delete app;
}

#endif
