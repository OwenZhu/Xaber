#pragma once

#ifdef XB_PLATFORM_WINDOWS

extern xaber::Application* xaber::create_application();

int main(int argc, char** argv) {
	xaber::Log::init();
	XB_CORE_INFO("Xaber starts!");
	auto app = xaber::create_application();
	app->run();
	delete app;
}

#endif
