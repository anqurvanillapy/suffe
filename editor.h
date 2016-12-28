#ifndef SUFFE_EDITOR_H_
#define SUFFE_EDITOR_H_

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct editor_syntax {
    char **fexts;
    char **kwds;    // TODO: Do a Markdown highlighter first
};

typedef struct {
    int             idx;
    int             size;
    int             rsize;
    char            *chars;
    char            *render;
    unsigned char   *hl;
    int             hl_oc;
} erow;

typedef struct {
    int r, g, b;
} hlcolor;

struct editor_config {
    char    *fname;
    char    statusmsg[80];
    time_t  statusmsg_time;
    int     cx, cy;
    int     rowoff;
    int     coloff;
    int     screenrows;
    int     screencols;
    int     numrows;
    erow    *row;
    int     rawmode;
    int     dirty;
    struct  editor_syntax *syntax;
};

void init_editor(struct editor_config *E);
void editor_select_highlight(const char *fname);

#endif // !SUFFE_EDITOR_H_
