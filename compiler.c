#include "compiler.h"

int compile_file(const char *filename, const char *out_file, int flags) {
  struct compile_process *process =
      compile_process_create(filename, out_file, flags);

  if (!process)
    return COMPILE_FAILED_WITH_ERRORS;
  // Perform lexical analysis

  // Perform parsing

  // Perform code generation..

  return COMPILE_FILE_COMPILED_OK;
}
