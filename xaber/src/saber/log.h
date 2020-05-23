#pragma once

#include "saber/core.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace saber {

	class SAB_API Log
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
#define SAB_CORE_TRACE(...)    ::saber::Log::get_core_logger()->trace(__VA_ARGS__)
#define SAB_CORE_INFO(...)     ::saber::Log::get_core_logger()->info(__VA_ARGS__)
#define SAB_CORE_WARN(...)     ::saber::Log::get_core_logger()->warn(__VA_ARGS__)
#define SAB_CORE_ERROR(...)    ::saber::Log::get_core_logger()->error(__VA_ARGS__)
#define SAB_CORE_CRITICAL(...) ::saber::Log::get_core_logger()->critical(__VA_ARGS__)

// Client log macros
#define SAB_TRACE(...)         ::saber::Log::get_client_logger()->trace(__VA_ARGS__)
#define SAB_INFO(...)          ::saber::Log::get_client_logger()->info(__VA_ARGS__)
#define SAB_WARN(...)          ::saber::Log::get_client_logger()->warn(__VA_ARGS__)
#define SAB_ERROR(...)         ::saber::Log::get_client_logger()->error(__VA_ARGS__)
#define SAB_CRITICAL(...)      ::saber::Log::get_client_logger()->critical(__VA_ARGS__)
