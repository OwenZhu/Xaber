#pragma once

#include <memory>

#ifdef SAB_PLATFORM_WINDOWS
	#ifdef SAB_BUILD_DLL
		#define SAB_API __declspec(dllexport)
	#else
		#define SAB_API __declspec(dllimport)
	#endif

#else
	#error saber only supports Windows!

#endif

#define BIT(x) (1 << x)

namespace saber {

	template<typename T>
	using Scope = std::unique_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Scope<T> create_scope(Args&& ... args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template<typename T>
	using Ref = std::shared_ptr<T>;
	template<typename T, typename ... Args>
	constexpr Ref<T> create_ref(Args&& ... args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}
}
