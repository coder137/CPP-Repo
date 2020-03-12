#include <iostream>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

#include "docopt/docopt.h"

/**
 * Static functions
 */
static void spdlog_example();

/**
 * Static variables
 */
static const char USAGE[] =
    R"(Naval Fate.

    Usage:
      naval_fate
      naval_fate ship new <name>...
      naval_fate ship <name> move <x> <y> [--speed=<kn>]
      naval_fate ship shoot <x> <y>
      naval_fate mine (set|remove) <x> <y> [--moored | --drifting]
      naval_fate (-h | --help)
      naval_fate --version

    Options:
      -h --help     Show this screen.
      --version     Show version.
      --speed=<kn>  Speed in knots [default: 10].
      --moored      Moored (anchored) mine.
      --drifting    Drifting mine.
)";

int main(int argc, char **argv)
{
  std::map<std::string, docopt::value> args = docopt::docopt(USAGE,
                                                             {argv + 1, argv + argc},
                                                             true,              // show help if requested
                                                             "Naval Fate 2.0"); // version string
  // Parsed Arguments
  for (auto const &arg : args)
  {
    std::cout << arg.first << " -> " << arg.second << std::endl;
  }

  spdlog_example();
  return 0;
}

static void spdlog_example()
{
  spdlog::info("Welcome to spdlog!");
  spdlog::error("Some error message with arg: {}", 1);

  spdlog::warn("Easy padding in numbers like {:08d}", 12);
  spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
  spdlog::info("Support for floats {:03.2f}", 1.23456);
  spdlog::info("Positional args are {1} {0}..", "too", "supported");
  spdlog::info("{:<30}", "left aligned");

  spdlog::set_level(spdlog::level::debug); // Set global log level to debug
  spdlog::debug("This message should be displayed..");

  // change log pattern
  spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");

  // Compile time log levels
  // define SPDLOG_ACTIVE_LEVEL to desired level
  SPDLOG_TRACE("Some trace message with param {}", 42);
  SPDLOG_DEBUG("Some debug message");

  // Set the default logger to file logger
  auto file_logger = spdlog::basic_logger_mt("basic_logger", "logs/basic.txt");
  spdlog::set_default_logger(file_logger);

  // Add to logging file
  spdlog::warn("Easy padding in numbers like {:08d}", 12);
  spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
  spdlog::info("Support for floats {:03.2f}", 1.23456);
  spdlog::info("Positional args are {1} {0}..", "too", "supported");
  spdlog::info("{:<30}", "left aligned");
}
