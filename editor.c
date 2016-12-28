/**
 *  Editor view of the browser
 */

#include "editor.h"

void
init_editor(struct editor_config *Ecfg)
{
    Ecfg->cx = 0;
    Ecfg->cy = 0;
    Ecfg->rowoff = 0;
    Ecfg->coloff = 0;
    Ecfg->numrows = 0;
    Ecfg->row = NULL;
    Ecfg->dirty = 0;
    Ecfg->fname = NULL;
    Ecfg->syntax = NULL;
}

void
editor_select_highlight(const char *fname)
{
    fprintf(stdout, KCYN "%s" KNRM "\n", fname);
}
