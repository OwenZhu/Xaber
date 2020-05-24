#pragma once

#include <memory>

#ifdef XB_PLATFORM_WINDOWS
	#ifdef XB_BUILD_DLL
		#define XB_API __declspec(dllexport)
	#else
		#define XB_API __declspec(dllimport)
	#endif

#else
	#error xaber only supports Windows!

#endif

#define BIT(x) (1 << x)

namespace xaber {

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
