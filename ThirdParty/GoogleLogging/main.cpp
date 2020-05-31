#include <iostream>

#include <glog/logging.h>

// Called when LOG FATAL is called
static void failure_function() { LOG(INFO) << "Something went wrong\n"; }

int main(int argc, char **argv) {
  std::cout << "Hello Google Logging\n";

  std::cout << "Log Directory: " << FLAGS_log_dir << std::endl;
  std::cout << "Log to console: " << FLAGS_logtostderr << std::endl;

  google::InitGoogleLogging(argv[0]);
  google::InstallFailureSignalHandler();
  google::InstallFailureFunction(&failure_function);

  FLAGS_log_dir = "."; // current dir
  LOG(INFO) << "Hello Info";

  FLAGS_logtostderr = true;
  LOG(INFO) << "Hello INFO";
  LOG(WARNING) << "Hello WARNING";
  LOG(ERROR) << "Hello ERROR";

  // Will call `failure_function` and stop the program
  // LOG(FATAL) << "Hello FATAL";

  // Get crash dump when program crashes due to runtime errors
  LOG(INFO) << 1 / 0; // Should crash here

  return 0;
}
