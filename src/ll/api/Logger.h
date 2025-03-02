#pragma once
/**
 *
 * @brief Logger System - Log text to console, file and player easily
 *
 * Create Logger
 * @code
 * Logger logger("MyPlugin"); // Create a logger (default: only log to console)
 * @endcode
 * Use Logger
 * @code
 * logger.info("Infomation");                      // Common
 * logger.error("Error! Code:{}", -1);             // fmt Format
 * @endcode
 */

#include "ll/api/base/Concepts.h"
#include "ll/api/i18n/I18nAPI.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <mutex>
#include <source_location>
#include <sstream>
#include <string>
#include <utility>

#include "fmt/chrono.h"
#include "fmt/color.h"
#include "fmt/compile.h"
#include "fmt/format.h"
#include "fmt/os.h"
#include "fmt/ranges.h"
#include "fmt/std.h"

namespace ll {
class Logger {
public:
    using player_output_fn = std::function<void(std::string_view)>;

    class OutputStream {
        friend class Logger;

    private:
        LLAPI void print(std::string_view) const noexcept;

    public:
        Logger*                        logger;
        std::string                    levelPrefix;
        int                            level;
        std::array<fmt::text_style, 4> style;
        std::array<std::string, 5>     consoleFormat;
        std::array<std::string, 5>     fileFormat;
        std::array<std::string, 5>     playerFormat;
        player_output_fn               playerOutputCallback;

        LLAPI explicit OutputStream(
            Logger&                               logger,
            std::string                           levelPrefix,
            int                                   level,
            std::array<fmt::text_style, 4> const& style        = {{}},
            std::array<std::string, 5> const&     playerFormat = {"<{2}|{1}> [{0}] {3}", "{:%T}", "{}", "{}", "{}"},
            std::array<std::string, 5> const& consoleFormat = {"{0} {1} {2} {3}", "{:%T}.{:0>3}", "{}", "[{}]", "{}"},
            std::array<std::string, 5> const& fileFormat = {"[{0} {1}][{2}] {3}", "{:%F %T}.{:0>3}", "{}", "{}", "{}"}
        );

        template <typename... Args>
        void operator()(fmt::format_string<Args...> fmt, Args&&... args) const {
            print(fmt::vformat(fmt.get(), fmt::make_format_args(args...)));
        }

        template <ll::concepts::IsString S>
        void operator()(S const& msg) const {
            print(msg);
        }

        void setPlayerOutputFunc(player_output_fn const& func) { playerOutputCallback = func; }
    };

public:
    std::string                  title;
    std::optional<std::ofstream> ofs          = std::nullopt;
    int                          consoleLevel = -1;
    int                          fileLevel    = -1;
    int                          playerLevel  = -1;
    bool                         ignoreConfig = false;

    OutputStream debug;
    OutputStream info;
    OutputStream warn;
    OutputStream error;
    OutputStream fatal;

    Logger(Logger&& other)
    : title(std::move(other.title)),
      ofs(std::move(other.ofs)),
      consoleLevel(other.consoleLevel),
      fileLevel(other.fileLevel),
      playerLevel(other.playerLevel),
      ignoreConfig(other.ignoreConfig),
      debug(std::move(other.debug)),
      info(std::move(other.info)),
      warn(std::move(other.warn)),
      error(std::move(other.error)),
      fatal(std::move(other.fatal)) {
        debug.logger = this;
        info.logger  = this;
        warn.logger  = this;
        error.logger = this;
        fatal.logger = this;
    }
    Logger& operator=(Logger&& other) {
        title        = std::move(other.title);
        ofs          = std::move(other.ofs);
        consoleLevel = other.consoleLevel;
        fileLevel    = other.fileLevel;
        playerLevel  = other.playerLevel;
        ignoreConfig = other.ignoreConfig;
        debug        = std::move(other.debug);
        info         = std::move(other.info);
        warn         = std::move(other.warn);
        error        = std::move(other.error);
        fatal        = std::move(other.fatal);
        debug.logger = this;
        info.logger  = this;
        warn.logger  = this;
        error.logger = this;
        fatal.logger = this;
        return *this;
    }

    LLNDAPI explicit Logger(std::string_view title = __builtin_FUNCTION(), bool ignoreConfig = false);

    ~Logger() { resetFile(); }

    LLAPI void resetFile();
    LLAPI bool setFile(std::filesystem::path const& logFile, bool appendMode = true);

    LLAPI static bool setDefaultFile(std::filesystem::path const& logFile, bool appendMode);

    void setPlayerOutputFunc(player_output_fn const& func) {
        debug.setPlayerOutputFunc(func);
        info.setPlayerOutputFunc(func);
        warn.setPlayerOutputFunc(func);
        error.setPlayerOutputFunc(func);
        fatal.setPlayerOutputFunc(func);
    }

    LLAPI static void setDefaultPlayerOutputFunc(player_output_fn const& func) { defaultPlayerOutputCallback = func; }

    std::ofstream& getFile() {
        if (ofs) {
            return ofs.value();
        }
        return defaultFile;
    }

    LLAPI static std::lock_guard<std::recursive_mutex> lock();

private:
    LLAPI static std::ofstream    defaultFile;
    LLAPI static player_output_fn defaultPlayerOutputCallback;
};
} // namespace ll
