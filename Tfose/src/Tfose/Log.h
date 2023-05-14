#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include <memory>

namespace Tfose {
	class TFOSE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	
	};

	
}

#define TF_CORE_ERROR(...)        ::Tfose::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TF_CORE_WARN(...)         ::Tfose::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TF_CORE_INFO(...)         ::Tfose::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TF_CORE_TRACE(...)        ::Tfose::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TF_CORE_CRITICAL(...)     ::Tfose::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define TF_WARN(...)         ::Tfose::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TF_ERROR(...)        ::Tfose::Log::GetClientLogger()->error(__VA_ARGS__)
#define TF_INFO(...)         ::Tfose::Log::GetClientLogger()->info(__VA_ARGS__)
#define TF_TRACE(...)        ::Tfose::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TF_CRITICAL(...)     ::Tfose::Log::GetClientLogger()->critical(__VA_ARGS__)