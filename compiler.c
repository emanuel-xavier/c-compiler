#include "compiler.h"

struct lex_process_functions compiler_lex_funtions = {
    .next_char = compile_process_next_char,
    .peek_char = compile_process_peek_char,
    .push_char = compile_process_push_char};

int compile_file(const char *filename, const char *out_file, int flags) {
  struct compile_process *process =
      compile_process_create(filename, out_file, flags);

  if (!process)
    return COMPILE_FAILED_WITH_ERRORS;

  // Perform lexical analysis
  struct lex_process *lex_process =
      lex_process_create(process, &compiler_lex_funtions, NULL);
  if (!lex_process)
    return COMPILE_FAILED_WITH_ERRORS;

  if ((lex(lex_process)) != LEXICAL_ANALYSIS_ALL_OK)
    return COMPILE_FAILED_WITH_ERRORS;

  // Perform parsing

  // Perform code generation..

  return COMPILE_FILE_COMPILED_OK;
}
