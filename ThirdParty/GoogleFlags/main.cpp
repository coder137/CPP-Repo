#include <gflags/gflags.h>
#include <iostream>

#include "declare_example.h"

DEFINE_bool(menu, true, "Include 'advanced' option in the menu listing");
DEFINE_string(languages, "english,french,german",
              "comma-separated list of languages to offer in the 'lang' menu");

DECLARE_bool(verbose);

int main(int argc, char **argv) {

  // Read this from the `gflag.h` file
  gflags::SetVersionString("1.0.0");
  gflags::SetUsageMessage("This is my custom usage message");
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  std::cout << "Hello Google Flags" << std::endl;
  std::cout << "Menu: " << FLAGS_menu << std::endl;
  std::cout << "Languages: " << FLAGS_languages << std::endl;

  // DECLARE keyword usage
  std::cout << "Verbose [DECLARE]: " << FLAGS_verbose << std::endl;
  declare_example_usage();

  return 0;
}
