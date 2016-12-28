#include <stdnoreturn.h>

#include "editor.h"

static struct editor_config Ecfg;

noreturn void
show_usage(void)
{
    fprintf(stdout, "Usage: suffe [filename]\n");
    exit(EXIT_FAILURE);
}

int
main(int argc, const char *argv[])
{
    if (argc != 2) show_usage();    // FIXME: argc should be 1 or 2

    init_editor(&Ecfg);
    editor_select_highlight(argv[1]);

    return 0;
}
