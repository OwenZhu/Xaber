#pragma once

#include "xaber/core.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace xaber {

	class XB_API Log
	{
	public:
		static void init();

		static Ref<spdlog::logger>& get_core_logger() { return s_core_logger; }
		static Ref<spdlog::logger>& get_client_logger() { return s_client_logger; }
	private:
		static Ref<spdlog::logger> s_core_logger;
		static Ref<spdlog::logger> s_client_logger;
	};
}

// Core log macros
#define XB_CORE_TRACE(...)    ::xaber::Log::get_core_logger()->trace(__VA_ARGS__)
#define XB_CORE_INFO(...)     ::xaber::Log::get_core_logger()->info(__VA_ARGS__)
#define XB_CORE_WARN(...)     ::xaber::Log::get_core_logger()->warn(__VA_ARGS__)
#define XB_CORE_ERROR(...)    ::xaber::Log::get_core_logger()->error(__VA_ARGS__)
#define XB_CORE_CRITICAL(...) ::xaber::Log::get_core_logger()->critical(__VA_ARGS__)

// Client log macros
#define XB_TRACE(...)         ::xaber::Log::get_client_logger()->trace(__VA_ARGS__)
#define XB_INFO(...)          ::xaber::Log::get_client_logger()->info(__VA_ARGS__)
#define XB_WARN(...)          ::xaber::Log::get_client_logger()->warn(__VA_ARGS__)
#define XB_ERROR(...)         ::xaber::Log::get_client_logger()->error(__VA_ARGS__)
#define XB_CRITICAL(...)      ::xaber::Log::get_client_logger()->critical(__VA_ARGS__)
