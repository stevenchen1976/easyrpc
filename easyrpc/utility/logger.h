/**
 * @file logger.h
 * @brief 日志库
 * @author chxuan, 787280310@qq.com
 * @version 1.0.0
 * @date 2017-11-05
 */
#pragma once

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif
#include <stdio.h>
#include <ctime>
#include <string>
#include <sstream>
#include <memory>

enum class log_level
{
    debug = 0,
    info,
    warn,
    error
};

#ifdef _WIN32
inline void gettimeofday(struct timeval* tv)
{
    uint64_t intervals;
    FILETIME ft;

    GetSystemTimeAsFileTime(&ft);
    intervals = (static_cast<uint64_t>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
    intervals -= 116444736000000000;
    tv->tv_sec = static_cast<long>(intervals / 10000000);
    tv->tv_usec = static_cast<long>((intervals % 10000000) / 10);
}
#endif

class logger_stream
{
public:
    logger_stream(const std::string& file_path, 
                  unsigned long line, 
                  log_level level);
    ~logger_stream();

    template<typename T>
    logger_stream& operator << (const T& t)
    {
        (*buffer_) << t;
        return *this;
    }

private:
    std::string get_current_time_us();
    std::string level_enum_to_string();
    std::string make_log();
    void print_log(const std::string& log);

private:
    std::shared_ptr<std::ostringstream> buffer_;
    log_level level_;      
};

class logger
{
public:
    logger(const char* file_path, 
           unsigned long line, 
           log_level level);
    logger_stream log() const;

private:
    std::string file_path_;             
    unsigned long line_;          
    log_level level_; 
};

#define LOCATION_INFO __FILE__, __LINE__

#define log_error       logger(LOCATION_INFO, log_level::error).log
#define log_warn        logger(LOCATION_INFO, log_level::warn).log
#define log_info        logger(LOCATION_INFO, log_level::info).log
#define log_debug       logger(LOCATION_INFO, log_level::debug).log
