#ifndef C_COMPILER_H
#define C_COMPILER_H

#include <stdio.h>

enum { COMPILE_FILE_COMPILED_OK, COMPILE_FAILED_WITH_ERRORS };

struct compile_process {
  int flags;
  struct compile_process_input_file {
    FILE *fp;
    const char *abs_path;
  } cfile;

  FILE *ofile;
};

int compile_file(const char *filename, const char *out_file, int flags);
struct compile_process *compile_process_create(const char *filename,
                                               const char *filename_out,
                                               int flags);

#endif
